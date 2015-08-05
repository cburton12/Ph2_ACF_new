#include "ChannelTester.h"

ChannelTester::ChannelTester() {}

void ChannelTester::TestChannels()
{ //Initializations
  uint8_t cVcth   = 25 ;
  uint8_t cVplus  = 50 ;
  double NumEvents= 10 ;

  double sum, AvgVal, res;
  std::vector<  std::vector< std::vector<double> > > EventRes; // EventRes[event#][cbc#][channel#]
  std::vector< std::pair<int,double> > ChannelMark;
  Shelve* cShelve = fShelveVector[0]; //only one shelve, board, and front end
  BeBoard* pBoard = cShelve->fBoardVector[0];
  Module* cFe = pBoard->fModuleVector[0];

  CbcRegWriter cWriterPlus( fCbcInterface, "Vplus", cVplus ); //set v+ and vcth
  accept( cWriterPlus );
  std::cout << BOLDBLUE << "Vplus set to "<< int( cVplus ) << RESET << std::endl;
  CbcRegWriter cWriterTh( fCbcInterface, "VCth", cVcth );
  accept( cWriterTh );
  std::cout << BOLDBLUE << "Vcth  set to " << int( cVcth ) << RESET << std::endl;

  fBeBoardInterface->Start( pBoard ); // Run(pBoard,0)
  fBeBoardInterface->ReadData( pBoard, 0, true );

  const Event* cEvent = fBeBoardInterface->GetNextEvent( pBoard );
  uint32_t ii = 0;
  while (cEvent)
    {
      std::vector< std::vector<double> > CbcRes;
      for ( auto cCbc : cFe->fCbcVector )
	{
	  std::vector<double> ChannelVec;
	  for ( uint32_t cChannel = 0; cChannel<254; cChannel++ )
	    {
	      //ChannelVec[cChannel] = ( cEvent->DataBit(cFe->getFeId(),cCbc->getCbcId(),cChannel) ) ? 1 : 0;
	      res = ( cEvent->DataBit( cFe->getFeId(), cCbc->getCbcId(), cChannel ) ) ? 1 : 0;
	      ChannelVec.push_back(res);
	    }
	  CbcRes.push_back(ChannelVec);
	}
      EventRes.push_back(CbcRes);
      ii++;
      if ( ii < NumEvents )
	cEvent = fBeBoardInterface->GetNextEvent( pBoard );
      else break;
    }
  fBeBoardInterface->Stop( pBoard, 0 );

  for (int cbc = 0; cbc<=1; ++cbc)//handle outputs
    {
      std::cout<<"Percent of events registered per channel on "<<BOLDBLUE<<"CBC "<<cbc<<RESET<<":"<<std::endl;
      std::vector< std::pair<double,double> > ChannelMark;
      for (int cChannel = 0; cChannel<254; cChannel++)
	{
	  sum = 0;
	  for (int jj=0; jj<NumEvents; jj++)
	    {
	      sum += EventRes[jj][cbc][cChannel];
	    }
	  AvgVal = sum/NumEvents;
	  std::cout<<AvgVal * 100 <<"\t";
	  if (cChannel % 10 == 9) std::cout<<std::endl;
	  std::pair <int,double> BadChannel;
	  if (AvgVal < 1)
	    {
	      BadChannel = std::make_pair (cChannel, AvgVal);
	      ChannelMark.push_back(BadChannel);
	    }
	}
      std::cout<<"\nChannels Reading less than full:"<<(ChannelMark.size())<<std::endl;
      for (int ii=0; ii<ChannelMark.size(); ii++)
	{
	  std::cout<<"Channel: "<<ChannelMark[ii].first<<"\t"<<"Value:"<<ChannelMark[ii].second<<std::endl;
	}
    }
}
