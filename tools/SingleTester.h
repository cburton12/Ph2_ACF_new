#ifndef SingleTester_h__
#define SingleTester_h__

#include "Tool.h"
#include "../Utils/Visitor.h"
#include "../Utils/Utilities.h"
#include "../Utils/CommonVisitors.h"

#define READBACK true

using namespace Ph2_HwDescription;
using namespace Ph2_HwInterface;
using namespace Ph2_System;

class SingleTester : public Tool
{
 public:
  SingleTester();
  void TestChannels();
};

#endif
