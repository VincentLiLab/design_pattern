#ifndef _DESIGN_PATTERN_STRATEGY_QUACK_BEHAVIOR_H_
#define _DESIGN_PATTERN_STRATEGY_QUACK_BEHAVIOR_H_


class QuackBehavior {
public:
  QuackBehavior() = default;
  virtual ~QuackBehavior() = default;

  virtual void Perform(void) = 0;

  QuackBehavior(const QuackBehavior &) = delete;
  QuackBehavior& operator=(const QuackBehavior &) = delete;
  QuackBehavior(QuackBehavior &&) = default;
  QuackBehavior& operator=(QuackBehavior &&) = default;
};

#endif