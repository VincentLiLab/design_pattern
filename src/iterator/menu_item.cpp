#include "menu_item.hpp"

MenuItem::MenuItem(std::string &&name, std::string &&description, bool vegetarian, double price) : 
name_(std::move(name)),
description_(std::move(description)),
vegetarian_(vegetarian),
price_(price) {

}

const std::string MenuItem::GetName(void) {
  return this->name_;
}

const std::string MenuItem::GetDescription(void) {
  return this->description_;
}

bool MenuItem::GetVegetarian(void) {
  return this->vegetarian_;
}

double MenuItem::GetPrice(void) {
  return this->price_;
}