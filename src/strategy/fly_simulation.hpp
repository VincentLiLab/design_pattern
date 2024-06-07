#ifndef _DESIGN_PATTERN_STRATEGY_FLY_SIMULATION_H_
#define _DESIGN_PATTERN_STRATEGY_FLY_SIMULATION_H_

#include "fly_behavior.hpp"

class FlySimulation : public FlyBehavior
{
public:
  FlySimulation() = default;
  virtual ~FlySimulation() override;
  
  virtual void Perform(void) override;

  FlySimulation(const FlySimulation &) = delete;
  FlySimulation& operator=(const FlySimulation &) = delete;
  FlySimulation(FlySimulation &&) = delete;
  FlySimulation& operator=(FlySimulation &&) = delete;
};

#endif