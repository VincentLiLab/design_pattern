#include "fly_simulation.hpp"

#include <iostream>


FlySimulation::~FlySimulation() {
  std::cout << "FlySimulation dtor" << std::endl;
}

void FlySimulation::Perform(void) {
  std::cout << "FlySimulation::Perform" << std::endl;
}