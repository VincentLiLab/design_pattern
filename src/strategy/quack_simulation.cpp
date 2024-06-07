#include "quack_simulation.hpp"

#include <iostream>


QuackSimulation::~QuackSimulation() {
  std::cout << "QuackSimulation dtor" << std::endl;
}

void QuackSimulation::Perform(void) {
  std::cout << "Quack::Perform" << std::endl;
}