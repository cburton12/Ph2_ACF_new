#include "HistogramMaker.h"

HistogramMaker::HistogramMaker() {};

void HistogramMaker::GenerateHistograms()
{ 
  uint8_t cVcth   = 120 ;
  uint8_t cVplus  = 130 ;
  double NumEvents= 200 ;

  double sum, AvgVal, res;
  std::vector<  std::vector< std::vector<double> > > EventRes; // EventRes[event#][cbc#][channel#]
  std::vector<double> AvgValVec;

  CbcRegWriter cWriterPlus( fCbcInterface, "Vplus", cVplus ); //set v+ and vcth
  accept( cWriterPlus );
  std::cout << BOLDBLUE << "Vplus set to "<< int( cVplus ) << RESET << std::endl;
  CbcRegWriter cWriterTh  ( fCbcInterface, "VCth" , cVcth  );
  accept( cWriterTh );
  std::cout << BOLDBLUE << "Vcth  set to "<< int( cVcth  ) << RESET << std::endl;

  uint32_t N = 0;
  uint32_t AcqNum = 0;

  fBeBoardInterface->Start( pBoard ); // Run(pBoard,AcqNum)
  while (N<NumEvents)
    {
      fBeBoardInterface->ReadData( pBoard, AcqNum, true );

      const Event* cEvent = fBeBoardInterface->GetNextEvent( pBoard );
      while (cEvent)
	{
	  std::vector< std::vector<double> > CbcRes;
	  for ( auto cCbc : cFe->fCbcVector )
	    {
	      std::vector<double> ChannelVec;
	      for ( uint32_t cChannel = 0; cChannel<254; cChannel++ )
		{
		  res = ( cEvent->DataBit(cFe->getFeId(),cCbc->getCbcId(),cChannel) ) ? 1 : 0;
		  ChannelVec.push_back(res);
		}
	      CbcRes.push_back(ChannelVec);
	    }
	  EventRes.push_back(CbcRes);
	  N++;
	  if ( N <=  NumEvents )
	    cEvent = fBeBoardInterface->GetNextEvent( pBoard );
	  else break;
	} // end of data capture
    }
  for ( auto cCbc : cFe->fCbcVector )//handle outputs
    {
      uint32_t cCbcId = cCbc->getCbcId();
      auto cHist = cHistMap.find(cCbc);
      auto cCanvas = cCanvasMap[cFe];
      
      for (double cChannel = 0; cChannel<254; cChannel++)
	{
	  sum = 0;
	  for (int jj=0; jj<NumEvents; jj++)
	    {
	      sum += EventRes[jj][cCbcId][cChannel];
	    }
	  AvgVal = sum/NumEvents;
	  cHist->second->Fill(  cChannel , AvgVal/2 );
	}
      cCanvas->cd(cCbcId+1);
      cHist->second->Draw();
      cCanvas->Update();
    }
  fBeBoardInterface->Stop( pBoard, AcqNum );
}

void HistogramMaker::Initialize()
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
      cHist = new TH1F( cHistname, cHistname, 255, 0, 255 );
      cHistMap[cCbc] = cHist;
    }
  std::cout<<"Canvas and Histograms initialized"<<std::endl;
}
