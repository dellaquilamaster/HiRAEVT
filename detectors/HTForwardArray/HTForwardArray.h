#ifndef HTFORWARDARRAY_H
#define HTFORWARDARRAY_H

/* *******************************************************************************************************
 * HTForwardArray Class
 * v1.0 04/29/2018
 * class to store Forward Array data derived from RBForwardArray class
 * implemented by Daniele Dell'Aquila (dellaqui@nscl.msu.edu)
 * 02/13/2018 v1.0 The class is composed by:
 * 1 HTForwardArrayCluster.
 *
 *
 * class HTForwardArrayCluster : it contains an array of RBForwardArrayDetector objects
 *
 * - RBForwardArrayDetector array
 * | - fnumdet
 * | - fE
 * | - fTime
 */

#include <TROOT.h>
#include <TTree.h>
#include <HTForwardArrayRootEvent.h>
#include <HTForwardArrayMap.h>
#include <HTRootCAEN7xx.h>
#include <HTRootCAEN1x90.h>
#include <HTDetector.h>

#include <HTForwardArrayCluster.h>

class HTForwardArray : public HTDetector
{
public :
  HTForwardArray(const char *, int);               //!Constructor
  ~HTForwardArray();                               //!Destructor

  void Clear() override;                           //!Clear. Not used in the current implementation.

  void InitTTreeBranch(TTree *) override;          //!Initialize TTree Branch containing detector ROOT type
  void BuildEvent() override;                      //!Calls individual electronic modules to feel detector branches
  void FillMappedData() override;                  //!Stores mapped data in detector ROOT class to be written on the output tree

private :
  HTForwardArrayCluster *fForwardArray;            //!HTForwardArrayCluster containing event-by-event mapped data
  HTForwardArrayRootEvent * fevt;                  //!RootEvent type of the detector
};

#endif
