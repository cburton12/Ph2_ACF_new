#ifndef HistogramMaker_h__
#define HistogramMaker_h__

#include "Tool.h"
#include "../Utils/CommonVisitors.h"
#include <map>
#include "TCanvas.h"
#include "TProfile.h"
#include "TString.h"

typedef std::map<Cbc*,TH1F*> HistMap;
typedef std::map<Cbc*,TProfile*> ProfileMap;
typedef std::map<Module*,TCanvas*> CanvasMap;

class HistogramMaker : public Tool
{
 public:
  HistogramMaker();

  // methods
  void GenerateHistograms();
  void Initialize();

  // global
  Shelve*  cShelve;
  BeBoard* pBoard ;
  Module*  cFe    ;

  HistMap    cHistMap  ;
  CanvasMap  cCanvasMap;
};
#endif
