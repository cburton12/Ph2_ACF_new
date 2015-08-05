#include "TimeWalker.h"

TimeWalker::TimeWalker() {};

void TimeWalker::GenerateHistograms()
{ 
  uint8_t cVcth   = 94 ;
  uint8_t cVplus  = 100;
  double NumEvents= 10;
  uint8_t cDelay  = 0 ;

  double AvgVal, res;
  EventVector EventRes; // EventRes[event#][cbc#][channel#]
  std::vector<double> AvgValVec;
  std::vector<int> ChannelMark;  
  uint32_t N = 0;
  uint32_t AcqNum = 0;
  
  CbcRegWriter cWriterPlus( fCbcInterface, "Vplus", cVplus ); //set v+ and vcth
  accept( cWriterPlus );
  std::cout << BOLDBLUE << "Vplus set to "<< int( cVplus ) << RESET << std::endl;
  CbcRegWriter cWriterTh  ( fCbcInterface, "VCth" , cVcth  );
  accept( cWriterTh );
  std::cout << BOLDBLUE << "Vcth  set to "<< int( cVcth  ) << RESET << std::endl;

  setDelayAndTestGroup(cDelay);
  std::cout << BOLDBLUE << "Delay set to "<< int( cDelay ) << RESET << std::endl;

  while (N < NumEvents )
    {
      Run(pBoard, AcqNum);

      const Event* cEvent = fBeBoardInterface->GetNextEvent( pBoard );
      while (cEvent)
	{
	  //std::cout<< *cEvent <<std::endl;
	  std::vector< std::vector<double> > CbcRes;
	  for ( auto cCbc : cFe->fCbcVector )
	    {
	      uint32_t cCbcId       = cCbc->getCbcId();
	      uint32_t cDelayRegVal = cCbc->getReg("SelTestPulseDel&ChanGroup");
	      std::vector<double> ChannelVec;
	      for ( uint32_t cChannel = 0; cChannel<254; cChannel++ )
		{
		  res = ( cEvent->DataBit(cFe->getFeId(),cCbcId,cChannel) ) ? 1 : 0;
		  //std::cout<<"channel: "<<cChannel<<"        "<<"res: "<<res<<std::endl;
		  //std::cout<<res;
		  ChannelVec.push_back(res);
		}
	      CbcRes.push_back(ChannelVec);
	      //std::cout<<std::endl;
	    }
	  EventRes.push_back(CbcRes);
	  //std::cout<<std::endl;
	  N++;
	  if ( N <= NumEvents )
	    cEvent = fBeBoardInterface->GetNextEvent( pBoard );
	  else break;
	}
    } // end of data capture

  for ( auto cCbc : cFe->fCbcVector )//handle outputs
    {
      uint32_t cCbcId = cCbc->getCbcId();
      for (int cChannel = 0; cChannel<254; cChannel++)
	{
	  double sum = 0;
	  for (int jj=0; jj<NumEvents; jj++)
	    {
	      sum += EventRes[jj][cCbcId][cChannel];
	    }
	  AvgVal = sum/NumEvents;
	  //if (AvgVal < 1)
	  if (true)
	    {
	      int BadChannel = cChannel;
	      ChannelMark.push_back(BadChannel);
	    }
	}
      std::cout<<"Entries used per mod on Cbc "<<cCbcId<<": "<<ChannelMark.size() * NumEvents / 10 <<std::endl;
      std::vector< double > ModVec;
      
      auto cHist = cHistMap.find(cCbc);
      auto cCanvas = cCanvasMap[cFe];
      
      for (int modit = 0; modit!=10; modit++)
	{
	  double SumLen = 0;
	  double sum = 0;
	  for (auto cChannel : ChannelMark)
	    {
		for (int jj=0; jj<NumEvents; jj++)
		  {
		    if (jj%10 == modit)
		      { 
			sum += EventRes[jj][cCbcId][cChannel];
			SumLen++;
		      }
		  }
	    }
	  AvgVal = sum / SumLen;
	  ModVec.push_back(AvgVal);

	  cHist->second->Fill( modit , AvgVal );
	}
      cCanvas->cd(cCbcId+1);
      cHist->second->Draw();
      cCanvas->Update();
      cCanvas->Close();

      std::cout<<"Delay value at end: "<<int(cCbc->getReg("SelTestPulseDel&ChanGroup"))<<std::endl;
    }
}  

void TimeWalker::Initialize()
{
  cShelve = fShelveVector[0]; //only one shelve and board
  pBoard = cShelve->fBoardVector[0];
  cFe = pBoard->fModuleVector[0];
  uint32_t cFeId = cFe->getFeId();

  TString cCanvasname = Form( "Fe_Cbc_Histogram" ); //only want 1 canvas for both cbc's
  TCanvas* cCanvas = dynamic_cast<TCanvas*>( gROOT->FindObject( cCanvasname ) ); 
  cCanvas= new TCanvas( cCanvasname, cCanvasname );
  cCanvas->Divide(2);  
  cCanvasMap[cFe] = cCanvas;

  for ( auto cCbc : cFe->fCbcVector )// Loop for 2 Cbc's, histograms
    { 
      uint32_t cCbcId = cCbc->getCbcId();
      TString cHistname = Form( "Histogram_Fe%d_Cbc%d", cFeId, cCbcId );
      TH1F* cHist = dynamic_cast<TH1F*>( gROOT->FindObject( cHistname ) );
      if ( cHist ) delete cHist;
      cHist = new TH1F( cHistname, cHistname, 10, 0, 10 );
      cHist->SetFillColor( 4 );
      cHist->SetFillStyle( 3001 );
      cHistMap[cCbc] = cHist;
    }
  std::cout<<"Canvas and Histograms initialized"<<std::endl;
}

void TimeWalker::setDelayAndTestGroup( uint32_t cDelay )
{
  //uint8_t cCoarseDelay = floor( pDelay  / 25 );
  uint8_t cCoarseDelay = 0; //temp
  BeBoardRegWriter cBeBoardWriter( fBeBoardInterface, DELAY_AF_TEST_PULSE, cCoarseDelay );
  this->accept( cBeBoardWriter );
  CbcRegWriter cWriter( fCbcInterface, "SelTestPulseDel&ChanGroup", to_reg( cDelay, 0 ) );
  //CbcRegWriter cWriter( fCbcInterface, "SelTestPulseDel&ChanGroup", to_reg( cFineDelay, fTestGroup ) );
  this->accept( cWriter );
}
