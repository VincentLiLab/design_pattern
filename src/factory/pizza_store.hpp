#ifndef _DESIGN_PATTERN_FACTORY_PIZZA_STORE_H_
#define _DESIGN_PATTERN_FACTORY_PIZZA_STORE_H_

#include <memory>

#include "pizza.hpp"

class PizzaStore
{
public:
  PizzaStore() = default;
  virtual ~PizzaStore() = default;
  
  virtual std::unique_ptr<Pizza> CreatePizza(void) = 0;
  std::unique_ptr<Pizza> OrderPizza(void);

  PizzaStore(const PizzaStore &) = delete;
  PizzaStore& operator=(const PizzaStore &) = delete;
  PizzaStore(PizzaStore &&) = delete;
  PizzaStore& operator=(PizzaStore &&) = delete;
};

#endif 