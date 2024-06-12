#include "leaf.hpp"

#include <iostream>

#include "component.hpp"

Leaf::Leaf(std::string &&name, std::string &&description) : 
name_(std::move(name)),
description_(std::move(description)) { 

}

void Leaf::Add(std::unique_ptr<Component> &&component) {
  std::abort();
}

void Leaf::Remove(std::unique_ptr<Component> &&component) {
  std::abort();
}

const std::string Leaf::GetName(void) {
  return this->name_;
}

const std::string Leaf::GetDescription(void) {
  return this->description_;
}

void Leaf::Print(void) {
  std::cout << "Leaf " << this->name_ << " " << this->description_ << std::endl;
}

