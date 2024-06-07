#include "fly_wings.hpp"

#include <iostream>


FlyWings::~FlyWings() {
  std::cout << "FlyWings dtor" << std::endl;
}

void FlyWings::Perform(void) {
  std::cout << "FlyWings::Perform" << std::endl;
}