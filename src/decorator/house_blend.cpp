#include "house_blend.hpp"

#include <iostream>

#include "beverage.hpp"

HouseBlend::HouseBlend():
Beverage("HouseBlend") {

}

HouseBlend::~HouseBlend() {
  std::cout << "HouseBlend dtor" << std::endl;
}

const double HouseBlend::Cost(void) {
  return 3.0;
}
