#include "beverage.hpp"

#include <iostream>

Beverage::Beverage(std::string &&description) :
description_(std::move(description)) {

}

Beverage::~Beverage() {
  std::cout << "Beverage dtor" << std::endl;
}

const double Beverage::Cost(void) {
  return 1.0;
}

const std::string Beverage::GetDescription(void) {
  return this->description_;
}