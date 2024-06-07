#ifndef _DESIGN_PATTERN_OBSERVER_WEATHER_DATA_H_
#define _DESIGN_PATTERN_OBSERVER_WEATHER_DATA_H_

#include <memory>
#include <vector>

#include "subject.hpp"


class Observer;

class WeatherData : public Subject
{
public:

  WeatherData() = default;
  virtual ~WeatherData();

  virtual void registerObserver(const std::shared_ptr<Observer> &) override;
  virtual void notifyObservers() override;

  void SetMeasurements(float temperature, float humidity, float pressure);

  WeatherData(const WeatherData &) = delete;
  WeatherData& operator=(const WeatherData &) = delete;
  WeatherData(WeatherData &&) = delete;
  WeatherData& operator=(WeatherData &&) = delete;

private:

  std::vector<std::weak_ptr<Observer>> container_;
  float temperature_ = 0.0;
  float humidity_ = 0.0;
  float pressure_ = 0.0;
};

#endif 