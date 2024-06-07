#ifndef _DESIGN_PATTERN_OBSERVER_SUBJECT_H_
#define _DESIGN_PATTERN_OBSERVER_SUBJECT_H_

#include <memory>

class Observer;

class Subject
{
public:
  Subject() = default;
  virtual ~Subject() = default;

  virtual void registerObserver(const std::shared_ptr<Observer> &) = 0;
  virtual void notifyObservers() = 0;

  Subject(const Subject &) = delete;
  Subject& operator=(const Subject &) = delete;
  Subject(Subject &&) = delete;
  Subject& operator=(Subject &&) = delete;
};

#endif 