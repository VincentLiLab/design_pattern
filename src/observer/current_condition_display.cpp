#include "current_condition_display.hpp"

#include <exception>
#include <iostream>

void CurrentConditionDisplay::Update(float temperature, float humidity, float pressure) {
  this->temperature_ = temperature;
  this->humidity_ = humidity;
  this->pressure_ = pressure; 
}

void CurrentConditionDisplay::Display(void) {
  std::cout << "CurrentConditionDisplay::Update " << this->temperature_ << " " << this->humidity_ << " " << this->pressure_ << std::endl;
}


CurrentConditionDisplay::~CurrentConditionDisplay() {
  std::cout << "CurrentConditionDisplay dtor" << std::endl;
}