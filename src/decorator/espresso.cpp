#include "espresso.hpp"

#include <iostream>

#include "beverage.hpp"

Espresso::Espresso():
Beverage("Espresso") {

}

Espresso::~Espresso() {
  std::cout << "Espresso dtor" << std::endl;
}

const double Espresso::Cost(void) {
  return 2.0;
}


