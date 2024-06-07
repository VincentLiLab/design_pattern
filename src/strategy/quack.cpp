#include "quack.hpp"

#include <iostream>


Quack::~Quack() {
  std::cout << "Quack dtor" << std::endl;
}

void Quack::Perform(void) {
  std::cout << "Quack::Perform" << std::endl;
}