#ifndef _DESIGN_PATTERN_FACTORY_CHICAGO_PIZZA_H
#define _DESIGN_PATTERN_FACTORY_CHICAGO_PIZZA_H

#include "pizza.hpp"

class ChicagoPizza : public Pizza
{
public:
  ChicagoPizza() = default;
  virtual ~ChicagoPizza() = default;
  virtual void Bake(void);
  virtual void Cut(void);
  virtual void Box(void);

  ChicagoPizza(const ChicagoPizza &) = delete;
  ChicagoPizza& operator=(const ChicagoPizza &) = delete;
  ChicagoPizza(ChicagoPizza &&) = delete;
  ChicagoPizza& operator=(ChicagoPizza &&) = delete;
};

#endif 