#include "SingleTester.h"

SingleTester::SingleTester() {}
void SingleTester::TestChannels()
{ 
  Shelve* fShelve = fShelveVector[0];
  BeBoard* fBoard = fShelve->fBoardVector[0];
  Module* fFe = fBoard->fModuleVector[0];
  Cbc* cCbc = fFe->fCbcVector[0];

  int cVCth = 20; //COPIED FROM COMMISSIONING.CC
  CbcRegWriter cWriter( fCbcInterface, "VCth", cVCth );
  accept( cWriter );
  //CbcRegWriter cWriterPl( fCbcInterface, "Vplus", 30 );
  //accept( cWriterPl );

  //fBeBoardInterface->Start( fBoard );
  for (int cLat=0; cLat!=250; cLat++)
    {
      //CbcRegWriter cWriter( fCbcInterface, "TriggerLatency", cLat);
      //this->accept(cWriter);
      
      cWriter.setRegister( "TriggerLatency", cLat ); //COPIED FROM COMMISSIONING.CC
      this->accept( cWriter );
      
      //THE METHOD I USUALLY USE TO SET REGISTERS
      //CbcRegWriter cWriter(fCbcInterface,"VCth", cLat);
      //accept(cWriter);
      //CbcRegWriter cWriter(fCbcInterface,"TriggerLatency", cLat);
      //accept(cWriter);
	
      fBeBoardInterface->Start( fBoard );
      fBeBoardInterface->ReadData( fBoard, 0, false );
      //fBeBoardInterface->Stop( fBoard, 0 );
      
      int cHitCounter=0;
      const Event* cEvent = fBeBoardInterface->GetNextEvent( fBoard );
      while (cEvent!=0) {
	for ( uint32_t cChannel = 0; cChannel<254; cChannel++ )
	  {
	    bool res = cEvent->DataBit( fFe->getFeId() , cCbc->getCbcId() , cChannel );
	    std::cout<<*cEvent<<std::endl;
	    //std::cout<<res;
	    if (res) cHitCounter++;
	  }
	cEvent = fBeBoardInterface->GetNextEvent( fBoard );
      }
      std::cout<<"\nLatency: "<<cLat<<"            Hits: "<<cHitCounter<<std::endl;	
      fBeBoardInterface->Stop( fBoard, 0 );
    }
 
}
