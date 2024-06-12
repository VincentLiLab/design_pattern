#include "node.hpp"
#include "component.hpp"

Node::Node(std::string &&name, std::string &&description) : 
name_(std::move(name)),
description_(std::move(description)) { 

}

void Node::Add(std::unique_ptr<Component> &&component) {
  this->list_.emplace_back(std::move(component));
}

void Node::Remove(std::unique_ptr<Component> &&component) {
  this->list_.remove(component);
}

const std::string Node::GetName(void) {
  return this->name_;
}

const std::string Node::GetDescription(void) {
  return this->description_;
}

void Node::Print(void) {
  for (auto &it : this->list_) {
    it->Print();
  }
}

