#include "duck.hpp"

#include <iostream>
#include <memory>


Duck::Duck(std::shared_ptr<FlyBehavior> &&fly_behavior, std::shared_ptr<QuackBehavior> &&quack_behavior) :
fly_behavior_(std::move(fly_behavior)),
quack_behavior_(std::move(quack_behavior)) {

}

Duck::~Duck() {
  std::cout << "Duck dtor" << std::endl;
}

void Duck::SetFlyBehavior(std::shared_ptr<FlyBehavior> &&fly_behavior) {
  this->fly_behavior_ = fly_behavior;
}

void Duck::SetQuackBehavior(std::shared_ptr<QuackBehavior> &&quack_behavior) {
  this->quack_behavior_ = quack_behavior;
}

void Duck::PerformFly(void) {
  this->fly_behavior_->Perform();
}

void Duck::PerformQuack(void) {
  this->quack_behavior_->Perform();
}