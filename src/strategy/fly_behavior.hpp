#ifndef _DESIGN_PATTERN_STRATEGY_FLY_BEHAVIOR_H_
#define _DESIGN_PATTERN_STRATEGY_FLY_BEHAVIOR_H_

class FlyBehavior {
public:
  FlyBehavior() = default;
  virtual ~FlyBehavior() = default;
  FlyBehavior(FlyBehavior &&) = default;
  FlyBehavior& operator=(FlyBehavior &&) = default;

  virtual void Perform(void) = 0;
  
  FlyBehavior(const FlyBehavior &) = delete;
  FlyBehavior& operator=(const FlyBehavior &) = delete;
};

#endif