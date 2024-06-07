#ifndef _DESIGN_PATTERN_DECORATOR_ESPRESSO_H_
#define _DESIGN_PATTERN_DECORATOR_ESPRESSO_H_

#include "beverage.hpp"

class Espresso : public Beverage
{
public: 
  Espresso();
  virtual ~Espresso();

  virtual const double Cost(void) override;

  Espresso(const Espresso &) = delete;
  Espresso& operator=(const Espresso &) = delete;
  Espresso(Espresso &&) = delete;
  Espresso& operator=(Espresso &&) = delete;  
};

#endif 