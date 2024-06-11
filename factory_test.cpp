#include <iostream>

#include "src/factory/chicago_pizza_store.hpp"
#include "src/factory/newyork_pizza_store.hpp"

int main(int, char*[]){
  std::cout << "factory test" << std::endl;

  ChicagoPizzaStore chicago_pizza_store;

  auto chicago_pizza = chicago_pizza_store.OrderPizza();

  NewyorkPizzaStore newyork_pizza_store;

  auto newyork_pizza = newyork_pizza_store.OrderPizza();

}
