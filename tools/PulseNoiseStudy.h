#ifndef PulseNoiseStudy_h__
#define PulseNoiseStudy_h__

#include "Tool.h"
#include "../Utils/CommonVisitors.h"
#include <map>
#include "TCanvas.h"
#include "TProfile.h"
#include "TString.h"
#include "Channel.h"
#include "TMath.h"

typedef std::map<Cbc*,TCanvas*> CanvasMap;
typedef std::map< Cbc*,std::map<uint32_t,TH1F*> > ScurveMap; // indices: Cbc, Amplitude
typedef std::map<Cbc*,TH2F*> Hist2DMap;
typedef std::vector<std::vector<double>> vector2D;
typedef std::vector<double> vector1D;

class PulseNoiseStudy : public Tool
{
public:
    PulseNoiseStudy();
    
    // methods
    void Initialize();
    void ParseSettings();
    void ScanAmplitudes();
    uint32_t findPulseMax();
    vector1D ScanVCth( uint32_t cAmp );
    vector1D MakeScurve( DataMap cDataMap , uint32_t cAmp , uint32_t cVCthMax );
    void setSystemTestPulse( uint32_t cAmp );
    void setDelayAndTestGroup(uint32_t cDelay);
    void EventAveraging( vector2D EventRes );
    void findTestGroup();
    void ScanVCthEff( uint32_t cAmp );
    
    // global
    Shelve*  fShelve;
    BeBoard* fBoard ;
    Module*  fFe    ;
    
    uint32_t fNumEvents, fVplus, fChannel, fAmpMin, fAmpMin, fAmpStep;
    uint32_t pDelayMin, pDelayMax;
    
    CanvasMap fCanvasMap;
    ScurveMap fScurveMap;
    HistMap   fHistMap;
};
#endif
