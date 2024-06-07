#include "mocha.hpp"


#include <iostream>
#include <memory>
#include <string>

#include "beverage.hpp"

Mocha::Mocha(std::unique_ptr<Beverage> &&beverage) :
beverage_(std::move(beverage)) {

}

const double Mocha::Cost(void) {
  return this->beverage_->Cost() + 0.1;
}

const std::string Mocha::GetDescription(void) {
  return this->beverage_->GetDescription()  + " + mocha";
}

Mocha::~Mocha()
{
  std::cout << "Mocha dtor" << std::endl;
}