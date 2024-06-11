#ifndef _DESIGN_PATTERN_FACTORY_CHICAGO_PIZZA_STORE_H_
#define _DESIGN_PATTERN_FACTORY_CHICAGO_PIZZA_STORE_H_

#include <memory>

#include "pizza.hpp"
#include "pizza_store.hpp"


class ChicagoPizzaStore : public PizzaStore
{
public:
  ChicagoPizzaStore() = default;
  virtual ~ChicagoPizzaStore() = default;
  
  virtual std::unique_ptr<Pizza> CreatePizza(void);

  ChicagoPizzaStore(const ChicagoPizzaStore &) = delete;
  ChicagoPizzaStore& operator=(const ChicagoPizzaStore &) = delete;
  ChicagoPizzaStore(ChicagoPizzaStore &&) = delete;
  ChicagoPizzaStore& operator=(ChicagoPizzaStore &&) = delete;
};

#endif 