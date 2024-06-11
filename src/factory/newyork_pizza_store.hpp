#ifndef _DESIGN_PATTERN_FACTORY_NEWYORK_PIZZA_STORE_H_
#define _DESIGN_PATTERN_FACTORY_NEWYORK_PIZZA_STORE_H_

#include <memory>

#include "pizza.hpp"
#include "pizza_store.hpp"


class NewyorkPizzaStore : public PizzaStore
{
public:
  NewyorkPizzaStore() = default;
  virtual ~NewyorkPizzaStore() = default;
  
  virtual std::unique_ptr<Pizza> CreatePizza(void);

  NewyorkPizzaStore(const NewyorkPizzaStore &) = delete;
  NewyorkPizzaStore& operator=(const NewyorkPizzaStore &) = delete;
  NewyorkPizzaStore(NewyorkPizzaStore &&) = delete;
  NewyorkPizzaStore& operator=(NewyorkPizzaStore &&) = delete;
};

#endif 