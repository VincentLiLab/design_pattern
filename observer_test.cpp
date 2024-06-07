#include <iostream>
#include <memory>
#include <future>
#include <atomic>
#include <thread>

#include "src/observer/weather_data.hpp"
#include "src/observer/current_condition_display.hpp"


int main(int, char *[])
{
  std::cout << "observer test" << std::endl;

  WeatherData weather_data;
  std::atomic<bool> flag = true;

  auto current_condition_display0(std::make_shared<CurrentConditionDisplay>());
  auto current_condition_display1(std::make_shared<CurrentConditionDisplay>()); 
  auto current_condition_display2(std::make_shared<CurrentConditionDisplay>());

  weather_data.registerObserver(current_condition_display0);
  weather_data.registerObserver(current_condition_display1);
  weather_data.registerObserver(current_condition_display2);

  auto observer_function = [&weather_data, &flag](void) { 
    auto temperature = static_cast<float>(0.0);
    auto humidity = static_cast<float>(0.0);
    auto pressure = static_cast<float>(0.0);
    while(flag) {
      weather_data.SetMeasurements(temperature, humidity, pressure);
      std::this_thread::sleep_for(std::chrono::seconds(1));
      temperature += 1.0;
      humidity += 1.0;
      pressure += 1.0;
    }

    std::cout << "observer_function return" << std::endl;
    return 0;
  };

  auto fut = std::async(std::launch::async, observer_function); 

  std::this_thread::sleep_for(std::chrono::seconds(10));

  flag = false;

  fut.get();

  return 0;
}