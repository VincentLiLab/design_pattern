#include "chicago_pizza_store.hpp"

#include <memory>

#include "chicago_pizza.hpp"

std::unique_ptr<Pizza> ChicagoPizzaStore::CreatePizza(void) {
  return std::make_unique<ChicagoPizza>();
}