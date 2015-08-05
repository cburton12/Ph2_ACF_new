#include "../tools/TimeWalker.h"
#include <TApplication.h>

int main( int argc, char* argv[] )
{
  TApplication cApp( "Root Application", &argc, argv );
  TQObject::Connect( "TCanvas", "Closed()", "TApplication", &cApp, "Terminate()" );
  std::string cHWFile = "settings/HWDescription_2CBC.xml";
  //std::string cHWFile = "../Chad/Ph2_ACF/settings/PulseShape.xml";
  TimeWalker cTimeWalker;
  cTimeWalker.InitializeHw( cHWFile );
  cTimeWalker.ConfigureHw();
  cTimeWalker.Initialize();
  cTimeWalker.GenerateHistograms();
  cApp.Run();
  return 0;
}
