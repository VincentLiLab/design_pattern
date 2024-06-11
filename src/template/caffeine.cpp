#include "caffeine.hpp"

#include <iostream>

void Caffeine::BoilWater(void) {
  std::cout << "Caffeine::BoilWater" << std::endl;
}

void Caffeine::Brew(void) {
  std::cout << "Caffeine::Brew" << std::endl;
}

void Caffeine::PourInCup(void) {
  std::cout << "Caffeine::PourInCup" << std::endl;
}

void Caffeine::AddCondiments(void) {
  std::cout << "Caffeine::AddCondiments" << std::endl;
}

void Caffeine::PrepareRecipe(void) {
  this->BoilWater();
  this->Brew();
  this->PourInCup();
  this->AddCondiments();
}