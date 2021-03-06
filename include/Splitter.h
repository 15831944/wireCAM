#ifndef SPLITTER_H
#define SPLITTER_H

#include "gp_Vec.hxx"
#include "gp_Pnt.hxx"

class Slice;

class Splitter{
public:

  virtual bool
  evaluate(Slice& slice, const double& param, const gp_Pnt& point,
                       const double& alpha);

};
#endif //SPLITTER_H
