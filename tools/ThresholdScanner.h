#ifndef ThresholdScanner_h__
#define ThresholdScanner_h__

#include "Tool.h"
#include "../Utils/CommonVisitors.h"
#include <map>
#include "TCanvas.h"
#include "TProfile.h"
#include "TString.h"
#include "Channel.h"
#include "TMath.h"
#include "TH2F.h"

typedef std::map<Channel*,TH1F*> ScurveMap;
typedef std::map<uint32_t,TCanvas*> CanvasMap;
typedef std::map<Cbc*,std::vector<Channel*>> CbcChannelMap;
typedef std::vector<std::vector<std::vector<double>>> vector3D;
typedef std::vector<            std::vector<double>>  vector2D;
typedef std::vector<                        double>   vector1D;
typedef std::vector<std::pair<int,int> > VCthVec;
typedef std::map< std::pair<int,int> , vector2D > DataMap;
typedef std::map< uint32_t , std::pair<int,int> > RangeMap;

class ThresholdScanner : public Tool
{
 public:
  ThresholdScanner();

  // methods
  void Initialize();
  void ScanVCthValues();
  void ScanVcal(uint32_t cVCth);
  vector2D EventAveraging(vector3D EventRes);
  void MakeFeCanvas(uint32_t cVCth);
  void MakeScurve(Cbc* cCbc,uint32_t cVcth);
  
  void DensityPlot();
  double ChannelAverage(Cbc* cCbc,uint32_t cVCth,uint32_t cVplus);
  
  // global
  Shelve*  fShelve;
  BeBoard* fBoard ;
  Module*  fFe    ;
  int NumEvents, step, range, maxVal;
  VCthVec  fVCthVec;
  DataMap DataArray;
  
  CanvasMap     fCanvasMap;
  ScurveMap     fScurveMap;
  CbcChannelMap fCbcChannelMap;
  RangeMap fVplusRangeMap;

  bool doSingleChannel;
  bool doMakeScurve;
  uint32_t ChannelToTest;
};
#endif
