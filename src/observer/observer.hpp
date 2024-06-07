#ifndef _DESIGN_PATTERN_OBSERVER_OBSERVER_H_
#define _DESIGN_PATTERN_OBSERVER_OBSERVER_H_


class Observer
{
public:
  Observer() = default;
  virtual ~Observer() = default;

  virtual void Update(float temperature, float humidity, float pressure) = 0;
  virtual void Display() = 0;
  
  Observer(const Observer &) = delete;
  Observer& operator=(const Observer &) = delete;
  Observer(Observer &&) = delete;
  Observer& operator=(Observer &&) = delete;
};

#endif 