#include "pizza_store.hpp"

#include <memory>

#include "pizza.hpp"

std::unique_ptr<Pizza> PizzaStore::OrderPizza(void) {
  auto pizza = this->CreatePizza();
  pizza->Bake();
  pizza->Cut();
  pizza->Box();
  return pizza;
}