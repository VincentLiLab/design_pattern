#ifndef _DESIGN_PATTERN_FACTORY_CHICAGO_PIZZA_H
#define _DESIGN_PATTERN_FACTORY_CHICAGO_PIZZA_H

#include "pizza.hpp"

class ChicagoPizza : public Pizza
{
public:
  ChicagoPizza() = default;
  virtual ~ChicagoPizza() = default;
  virtual void Bake(void) override;
  virtual void Cut(void) override;
  virtual void Box(void) override;

  ChicagoPizza(const ChicagoPizza &) = delete;
  ChicagoPizza& operator=(const ChicagoPizza &) = delete;
  ChicagoPizza(ChicagoPizza &&) = delete;
  ChicagoPizza& operator=(ChicagoPizza &&) = delete;
};

#endif 