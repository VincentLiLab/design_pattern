#ifndef _DESIGN_PATTERN_OBSERVER_CURRENT_CONDITION_DISPLAY_H_
#define _DESIGN_PATTERN_OBSERVER_CURRENT_CONDITION_DISPLAY_H_

#include "observer.hpp"

class CurrentConditionDisplay : public Observer
{
public:
  CurrentConditionDisplay() = default;
  virtual ~CurrentConditionDisplay();

  virtual void Update(float temperature, float humidity, float pressure);
  virtual void Display();

  CurrentConditionDisplay(const CurrentConditionDisplay &) = delete;
  CurrentConditionDisplay& operator=(const CurrentConditionDisplay &) = delete;
  CurrentConditionDisplay(CurrentConditionDisplay &&) = delete;
  CurrentConditionDisplay& operator=(CurrentConditionDisplay &&) = delete;
private:
  float temperature_ = 0.0;
  float humidity_ = 0.0;
  float pressure_ = 0.0;
};



#endif 