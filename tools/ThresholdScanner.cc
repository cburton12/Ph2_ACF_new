#include "ThresholdScanner.h"

ThresholdScanner::ThresholdScanner() {};

void parseSettings()
{
    // transfering the settings from the map to the global variables
    auto cSetting = fSettingsMap.find("NumEvents");
    fNumEvents = cSetting->second;
    auto cSetting = fSettingsMap.find("Vplus");
    fVplus = cSetting->second;
    auto cSetting = fSettingsMap.find("Channel");
    fChannel = cSetting->second;
    auto cSetting = fSettingsMap.find("AmpMin");
    fAmpMin = cSetting->second;
    auto cSetting = fSettingsMap.find("AmpMax");
    fAmpMax = cSetting->second;
}

void ThresholdScanner::Initialize()
{
    parseSettings();
    
  NumEvents=500;
  step = 1;
  range = 10;

  doSingleChannel=0;
  doMakeScurve=0;
  ChannelToTest=10;
  
  fShelve = fShelveVector[0]; //only one shelve and board
  fBoard = fShelve->fBoardVector[0];
  fFe = fBoard->fModuleVector[0];
  uint32_t BoardId=fBoard->getBeId();
  uint32_t FeId=fFe->getFeId();

  for (auto cCbc : fFe->fCbcVector)
    {
      uint32_t CbcId=cCbc->getCbcId();
      std::vector<Channel*> cChanVec;
      for (uint8_t ChannelId=0; ChannelId!=254; ChannelId++)
	{	
	  Channel* cChannel = new Channel(BoardId,FeId,CbcId,ChannelId);
	  cChanVec.push_back(cChannel);
	}
      fCbcChannelMap[cCbc]=cChanVec;
    }
  for (auto& cVCthPair : fVCthVec)
    {
      int cVCth = cVCthPair.second;
      fVplusRangeMap[cVCth]=std::make_pair(std::max(0,cVCth-range),cVCth+range);
    }
}

void ThresholdScanner::ScanVCthValues()
{
  for (auto& cVCthPair : fVCthVec )
    {
      int cVCth = cVCthPair.second;
      CbcRegWriter cWriterTh( fCbcInterface, "VCth", cVCth );
      accept( cWriterTh );
      std::cout << RED << "Vcth  set to " << int( cVCth ) << RESET << std::endl;
      
      ScanVcal(cVCth);
    }
  DensityPlot();
}

void ThresholdScanner::ScanVcal(uint32_t cVCth)
{
  std::pair<int,int> cVplusRange = fVplusRangeMap.find(cVCth)->second;
  for (int cVplus=cVplusRange.first; cVplus!=cVplusRange.second; cVplus+=step)
    {
      CbcRegWriter cWriterPlus( fCbcInterface, "Vplus", cVplus ); //set Vcal
      accept( cWriterPlus );
      std::cout << BLUE << "Vplus set to "<< int( cVplus ) << RESET << std::endl;
      
      vector3D EventData;
      int N=0;
      int AcqNum=0;
      while (N < NumEvents )
	{  
	  Run(fBoard, AcqNum);
	  const Event* cEvent = fBeBoardInterface->GetNextEvent( fBoard );
	  while (cEvent)
	    {
	      vector2D CbcData;
	      for ( auto cCbc : fFe->fCbcVector )
		{
		  uint32_t CbcId=cCbc->getCbcId();
		  vector1D ChannelData;
		  for (uint8_t cChannel=0; cChannel!=254; cChannel++)
		    {
		      double result = cEvent->DataBit(fFe->getFeId(),CbcId,cChannel);
		      ChannelData.push_back(result);
		    }
		  CbcData.push_back(ChannelData);
		}
	      EventData.push_back(CbcData);
	      N++;
	      if ( N <= NumEvents )
		cEvent = fBeBoardInterface->GetNextEvent( fBoard );
	      else break;
	    }
	  AcqNum++;
	}
      vector2D EventAvg = EventAveraging(EventData);
      DataArray[std::make_pair(cVCth,cVplus)]=EventAvg;
    } //end of this Vcal
  
  if (doMakeScurve)
    {
      MakeFeCanvas(cVCth); //one canvas for 2 CBCs
      for (Cbc* cCbc : fFe->fCbcVector)
	{      
	  MakeScurve(cCbc,cVCth); //makes fits and draws them
	}
    }
}

vector2D ThresholdScanner::EventAveraging(vector3D EventData)
{
  vector2D CbcAvg;
  for (Cbc* cCbc:fFe->fCbcVector)
    {
      vector1D EventAvg;
      uint32_t CbcId=cCbc->getCbcId();
      for (uint8_t cChannel=0; cChannel!=254; cChannel++)
	{
	  double sum = 0;
	  for (int ii=0; ii!=NumEvents; ii++)
	    {
	      sum += EventData[ii][CbcId][cChannel];
	    }
	  double AvgVal = sum/NumEvents;
	  EventAvg.push_back(AvgVal);
	}
      CbcAvg.push_back(EventAvg);
    }
  return CbcAvg;
}

void ThresholdScanner::MakeFeCanvas( uint32_t cVCth )
{
  TString cCanvasName = Form( "Fe0_SCurve_VCth%d",cVCth);
  TCanvas* ctmpCanvas = dynamic_cast<TCanvas*>(gROOT->FindObject(cCanvasName));
  auto cCanvas = new TCanvas(cCanvasName,cCanvasName);
  cCanvas->Divide(2);
  fCanvasMap[cVCth]=cCanvas;

  int maxVal = ((fVCthVec.back()).second)+range;

  for ( auto& cCbc : fFe->fCbcVector )
    {
      uint32_t CbcId = cCbc->getCbcId();
      std::vector<Channel*> cChanVec = fCbcChannelMap.find(cCbc)->second;
      for (auto& cChannel : cChanVec)
	{
	  uint8_t ChannelId = cChannel->fChannelId;
	  TString histname = Form( "Scurve_Cbc%d_Channel%d", CbcId, ChannelId );
	  
	  // initialize the Scurves
	  TH1F* fScurve = dynamic_cast<TH1F*>( gROOT->FindObject( histname ));
	  if (fScurve) delete fScurve;
	  fScurve = new TH1F( histname, Form( "Scurve_Cbc%d_Channel%d", CbcId, ChannelId ), maxVal , -range , range );
	  fScurve->Scale(1/double(NumEvents));
	  fScurve->GetXaxis()->SetTitle("Vcal-VCth");
	  fScurve->GetYaxis()->SetTitle("Efficiency");
	  fScurveMap[cChannel]=fScurve;
	}
    }
}

void ThresholdScanner::MakeScurve( Cbc* cCbc , uint32_t cVCth )
{
  uint32_t CbcId = cCbc->getCbcId();
  auto cCanvas = fCanvasMap.find(cVCth)->second;
  cCanvas->cd(CbcId+1);
  int maxVal = ((fVCthVec.back()).second)+range;

  std::vector<Channel*> cChanVec = fCbcChannelMap.find(cCbc)->second;
  for (auto& cChannel : cChanVec)
    {
      TH1F* cScurve = fScurveMap.find(cChannel)->second;
      //uint8_t ChannelId = cChannel->fChannelId;

      std::pair<int,int> cVplusRange = fVplusRangeMap.find(cVCth)->second;
      int ii=-range;
      for (int cVplus=cVplusRange.first; cVplus!=cVplusRange.second; cVplus+=step)
	{
	  double fillVal = ( DataArray.find(std::make_pair(cVCth,cVplus))->second )[CbcId][ChannelToTest];
	  cScurve->Fill(ii,fillVal);
	  ii++;
	}
      cScurve->Draw("hist same");
    }
  cCanvas->Update();
}


void ThresholdScanner::DensityPlot()
{
  TString cDensityCanvasName = Form( "Fe0_DensityPlot");
  TCanvas* ctmpDensityCanvas = dynamic_cast<TCanvas*>(gROOT->FindObject(cDensityCanvasName));
  auto cDensityCanvas = new TCanvas(cDensityCanvasName,cDensityCanvasName);
  //auto cDensityCanvas = new TCanvas("Fe0_Density_Plot","Fe0_Density_Plot");
  cDensityCanvas->Divide(2);

  for (auto& cCbc : fFe->fCbcVector )
    {
      uint32_t CbcId = cCbc->getCbcId();
      uint32_t VCthLen = fVCthVec.size();
      int maxVal = ((fVCthVec.back()).second)+range;

      TString cDensityHistName = Form( "Fe0_DensityPlot_Cbc%d",CbcId);
      TH2F* cDensityPlot = new TH2F(cDensityHistName , cDensityHistName , maxVal , 0, maxVal , VCthLen, 0, VCthLen);
      cDensityPlot->GetXaxis()->SetTitle("Vcal");
      cDensityPlot->GetYaxis()->SetTitle("VCth");
      //cDensityPlot->GetZaxis()->SetRangeUser(-0.1,1.1);

      for (auto& cVCthPair : fVCthVec )
	{
	  uint32_t cVCth = cVCthPair.second;
	  uint32_t cVCthInd = cVCthPair.first;
	  
	  std::pair<int,int> cVplusRange = fVplusRangeMap.find(cVCth)->second;
	  for (int cVplus=cVplusRange.first; cVplus!=cVplusRange.second; cVplus+=step)
	    {
	      double fillVal;
	      if (doSingleChannel)
	        fillVal = ( DataArray.find(std::make_pair(cVCth,cVplus))->second )[CbcId][ChannelToTest];
	      else
		fillVal = ChannelAverage(cCbc,cVCth,cVplus);
	      cDensityPlot->Fill(cVplus,cVCthInd,fillVal); // to fill the correct index
	    }
	}
      cDensityCanvas->cd(CbcId+1);
      cDensityPlot->Draw("COLZ SAME");
    }
  cDensityCanvas->Update();
}


double ThresholdScanner::ChannelAverage(Cbc* cCbc , uint32_t cVCth , uint32_t cVplus)
{
  uint32_t CbcId = cCbc->getCbcId();
  double sum=0;
  for (int cChannel=0; cChannel!=254; cChannel++)
    sum += ( DataArray.find(std::make_pair(cVCth,cVplus))->second )[CbcId][cChannel];
  double AvgVal = sum/254;
  return AvgVal;
}
