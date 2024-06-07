#include "weather_data.hpp"

#include <iostream>

#include "observer.hpp"

WeatherData::~WeatherData() {
  std::cout << "WeatherData dtor" << std::endl;
}

void WeatherData::registerObserver(const std::shared_ptr<Observer> &observer) {
  this->container_.emplace_back(observer);
}

void WeatherData::notifyObservers() {
  for (const auto it : this->container_) {
      auto observer = it.lock();
      if(observer != nullptr) {
        observer->Update(this->temperature_, this->humidity_, this->pressure_);
        observer->Display();
      }
  }
}

void WeatherData::SetMeasurements(float temperature, float humidity, float pressure) {
  this->temperature_ = temperature;
  this->humidity_ = humidity;
  this->pressure_ = pressure;
  this->notifyObservers();
}

