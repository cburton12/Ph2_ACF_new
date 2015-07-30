#include "../tools/ThresholdScanner.h"     
#include <TApplication.h>                  

int main( int argc , char* argv[] )
{
  std::string cHWFile = "settings/Calibration2CBC.xml";
  
  TApplication cApp("Root Application", &argc,argv );
  TQObject::Connect("TCanvas","Closed()","TApplication",&cApp,"Terminate()");

  ThresholdScanner cThresholdScanner;
  cThresholdScanner.InitializeHw(cHWFile);
  cThresholdScanner.InitializeSettings(cHWFile);
  cThresholdScanner.ConfigureHw();

  cThresholdScanner.Initialize();
  cThresholdScanner.ScanVCthValues();
  //cThresholdScanner.DensityPlot();

  cApp.Run();
  return 0;
}
