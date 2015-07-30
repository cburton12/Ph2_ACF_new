#include "../tools/ChannelTester.h"
#include "../Utils/argvparser.h"

int main()
{
  std::string cHWFile = "settings/HybridTest2CBC.xml";
  ChannelTester cChannelTester; //guide = calibrate.cc
  cChannelTester.InitializeHw( cHWFile );
  cChannelTester.ConfigureHw();
  cChannelTester.TestChannels();
return 0;
}
