#ifndef _DESIGN_PATTERN_STRATEGY_QUACK_H_
#define _DESIGN_PATTERN_STRATEGY_QUACK_H_

#include "quack_behavior.hpp"

class Quack : public QuackBehavior {
public:
  Quack() = default;
  virtual ~Quack() override;
  
  virtual void Perform(void) override;

  
  Quack(const Quack &) = delete;
  Quack& operator=(const Quack &) = delete;
  Quack(Quack &&) = delete;
  Quack& operator=(Quack &&) = delete;
};

#endif 