#include "newyork_pizza_store.hpp"

#include <memory>

#include "newyork_pizza.hpp"

std::unique_ptr<Pizza> NewyorkPizzaStore::CreatePizza(void) {
  return std::make_unique<NewYorkPizza>();
}

