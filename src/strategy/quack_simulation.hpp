#ifndef _DESIGN_PATTERN_STRATEGY_QUACK_SIMULATION_H_
#define _DESIGN_PATTERN_STRATEGY_QUACK_SIMULATION_H_

#include "quack_behavior.hpp"

class QuackSimulation : public QuackBehavior {
public:
  QuackSimulation() = default;
  virtual ~QuackSimulation() override;
  
  virtual void Perform(void) override;

  
  QuackSimulation(const QuackSimulation &) = delete;
  QuackSimulation& operator=(const QuackSimulation &) = delete;
  QuackSimulation(QuackSimulation &&) = delete;
  QuackSimulation& operator=(QuackSimulation &&) = delete;
};

#endif 