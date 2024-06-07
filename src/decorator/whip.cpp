#include "whip.hpp"
#include "beverage.hpp"

#include <iostream>
#include <memory>
#include <string>

Whip::Whip(std::unique_ptr<Beverage> &&beverage) :
beverage_(std::move(beverage)) {

}

const double Whip::Cost(void) {
  return this->beverage_->Cost() + 0.2;
}

const std::string Whip::GetDescription(void) {
  return this->beverage_->GetDescription()  + "+ whip";
}

Whip::~Whip() {
  std::cout << "Whip dtor" << std::endl;
}