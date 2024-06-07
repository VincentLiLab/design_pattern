#ifndef _DESIGN_PATTERN_DECORATOR_HOUSE_BLEND_H
#define _DESIGN_PATTERN_DECORATOR_HOUSE_BLEND_H

#include "beverage.hpp"

class HouseBlend : public Beverage
{
public: 
  HouseBlend();
  virtual ~HouseBlend();

  virtual const double Cost(void) override;

  HouseBlend(const HouseBlend &) = delete;
  HouseBlend& operator=(const HouseBlend &) = delete;
  HouseBlend(HouseBlend &&) = delete;
  HouseBlend& operator=(HouseBlend &&) = delete;  
};

#endif