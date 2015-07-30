#include "../tools/HistogramMaker.h"
#include <TApplication.h>

int main( int argc, char* argv[] )
{
  TApplication cApp( "Root Application", &argc, argv );
  TQObject::Connect( "TCanvas", "Closed()", "TApplication", &cApp, "Terminate()" );
  std::string cHWFile = "settings/HybridTest2CBC.xml";
  HistogramMaker cHistogramMaker;
  cHistogramMaker.InitializeHw( cHWFile );
  cHistogramMaker.ConfigureHw();
  cHistogramMaker.Initialize();
  cHistogramMaker.GenerateHistograms();
  cApp.Run();
  return 0;
}
