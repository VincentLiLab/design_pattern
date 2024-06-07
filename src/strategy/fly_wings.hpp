#ifndef _DESIGN_PATTERN_STRATEGY_FLY_WINGS_H_
#define _DESIGN_PATTERN_STRATEGY_FLY_WINGS_H_

#include "fly_behavior.hpp"


class FlyWings : public FlyBehavior
{
public:
  FlyWings() = default;
  virtual ~FlyWings() override;
  
  virtual void Perform(void) override;

  FlyWings(const FlyWings &) = delete;
  FlyWings& operator=(const FlyWings &) = delete;
  FlyWings(FlyWings &&) = delete;
  FlyWings& operator=(FlyWings &&) = delete;
};

#endif