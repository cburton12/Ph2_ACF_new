#ifndef TimeWalker_h__
#define TimeWalker_h__

#include "Tool.h"
#include "../Utils/CommonVisitors.h"
#include <map>
#include "TCanvas.h"
#include "TProfile.h"
#include "TString.h"

typedef std::map<Cbc*,TH1F*> HistMap;
typedef std::map<Cbc*,TProfile*> ProfileMap;
typedef std::map<Module*,TCanvas*> CanvasMap;
typedef std::vector< std::vector< std::vector<double> > > EventVector;

class TimeWalker : public Tool
{
 public:
  TimeWalker();

  // methods
  void GenerateHistograms();
  void Initialize();
  void setDelayAndTestGroup( uint32_t cDelay );
  //uint8_t to_reg( uint8_t pDelay, uint8_t pGroup );
  //uint8_t reversee( uint8_t n );

  // global
  Shelve*  cShelve;
  BeBoard* pBoard ;
  Module*  cFe    ;

  HistMap    cHistMap  ;
  CanvasMap  cCanvasMap;

 private:
  uint8_t reverse( uint8_t n )
  {
    // Reverse the top and bottom nibble then swap them.
    return ( fLookup[n & 0b1111] << 4 ) | fLookup[n >> 4];
  }
  
  uint8_t to_reg( uint8_t pDelay, uint8_t pGroup ) 
  {
    uint8_t cValue = ( ( reverse( pDelay ) ) & 0xF8 ) | ( ( reverse( pGroup ) ) >> 5 );
    return cValue;
  }
  
  unsigned char fLookup[16] =
    {
      0x0, 0x8, 0x4, 0xc, 0x2, 0xa, 0x6, 0xe,
      0x1, 0x9, 0x5, 0xd, 0x3, 0xb, 0x7, 0xf,
    };
  
};
#endif
