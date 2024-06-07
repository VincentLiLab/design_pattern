#ifndef _DESIGN_PATTERN_STRATEGY_DUCK_H_
#define _DESIGN_PATTERN_STRATEGY_DUCK_H_

#include "fly_behavior.hpp"
#include "quack_behavior.hpp"

#include <memory>

class Duck
{
public:
  explicit Duck(std::unique_ptr<FlyBehavior> &&fly_behavior, std::unique_ptr<QuackBehavior> &&quack_behavior);    
  virtual ~Duck();
  
  void PerformFly(void);
  void PerformQuack(void);
  void SetFlyBehavior(std::unique_ptr<FlyBehavior> &&fly_behavior);
  void SetQuackBehavior(std::unique_ptr<QuackBehavior> &&quack_behavior);

  Duck() = delete;
  Duck(const Duck &) = delete;
  Duck& operator=(const Duck &) = delete;
  Duck(Duck &&) = delete;
  Duck& operator=(Duck &&) = delete;

private:
  std::unique_ptr<FlyBehavior> fly_behavior_;
  std::unique_ptr<QuackBehavior> quack_behavior_;
};

#endif 