#ifndef _DESIGN_PATTERN_FACTORY_NEWYORK_PIZZA_H
#define _DESIGN_PATTERN_FACTORY_NEWYORK_PIZZA_H

#include "pizza.hpp"
 
class NewYorkPizza : public Pizza
{
public:
  NewYorkPizza() = default;
  virtual ~NewYorkPizza() = default;
  virtual void Bake(void) override;
  virtual void Cut(void) override;
  virtual void Box(void) override;

  NewYorkPizza(const NewYorkPizza &) = delete;
  NewYorkPizza& operator=(const NewYorkPizza &) = delete;
  NewYorkPizza(NewYorkPizza &&) = delete;
  NewYorkPizza& operator=(NewYorkPizza &&) = delete;
};

#endif 