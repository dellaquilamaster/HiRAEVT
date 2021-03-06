#include <HTNeutronWallRootEvent.h>

//________________________________________________
HTNeutronWallData::HTNeutronWallData(int num_bars) :
fmulti(0)
{
  fnumbar      =new Int_t   [num_bars];
  fLeft        =new Short_t [num_bars];
  fRight       =new Short_t [num_bars];
  ffastLeft    =new Short_t [num_bars];
  ffastRight   =new Short_t [num_bars];
  fTimeLeft    =new Double_t[num_bars];
  fTimeRight   =new Double_t[num_bars];
  fGeoMean     =new Double_t[num_bars];
  ffastGeoMean =new Double_t[num_bars];
}

//________________________________________________
HTNeutronWallData::~HTNeutronWallData()
{
  delete [] fnumbar   ;
  delete [] fLeft     ;
  delete [] fRight    ;
  delete [] ffastLeft ;
  delete [] ffastRight;
  delete [] fTimeLeft ;
  delete [] fTimeRight;
  delete [] fGeoMean  ;
  delete [] ffastGeoMean;
}

//________________________________________________
HTNeutronWallRootEvent::HTNeutronWallRootEvent(int num_bars) :
fNumBars(num_bars),
fNeutronWall(fNumBars)
{}

//________________________________________________
HTNeutronWallRootEvent::~HTNeutronWallRootEvent()
{}
