#ifndef ChannelTester_h__
#define ChannelTester_h__

#include "Tool.h"
#include "../HWDescription/BeBoard.h"
#include "../HWInterface/CbcInterface.h"
#include "../HWInterface/BeBoardInterface.h"
#include "../Utils/ConsoleColor.h"
#include "../Utils/CommonVisitors.h"
#include "Channel.h"
#include "TMultiGraph.h"
#include "TCanvas.h"
#include "TFitResultPtr.h"
#include "TStyle.h"
#include <time.h>
#include <map>
//#include <system>
#include "../System/SystemController.h"
#include <iostream>
#include <vector>

#define READBACK true

using namespace Ph2_HwDescription;
using namespace Ph2_HwInterface;
using namespace Ph2_System;

class ChannelTester : public Tool
{
 public:
  ChannelTester();
  void TestChannels();
};

#endif
