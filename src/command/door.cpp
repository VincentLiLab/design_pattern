#include "door.hpp"

#include <iostream>

void Door::On(void) {
  std::cout << "Door::On" << std::endl;
}

void Door::Off(void) {
  std::cout << "Door::Off" << std::endl;
}