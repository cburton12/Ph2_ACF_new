#include "../tools/SingleTester.h"

int main()
{
  std::string cHWFile = "settings/HybridTest2CBC.xml";
  SingleTester cSingleTester;
  cSingleTester.InitializeHw( cHWFile );
  cSingleTester.ConfigureHw();
  cSingleTester.TestChannels();
return 0;
}
