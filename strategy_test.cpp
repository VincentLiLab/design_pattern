#include <iostream>
#include <memory>

#include "src/strategy/duck.hpp"
#include "src/strategy/fly_simulation.hpp"
#include "src/strategy/fly_wings.hpp"
#include "src/strategy/quack.hpp"
#include "src/strategy/quack_simulation.hpp"

int main(int, char *[])
{
  std::cout << "strategy test" << std::endl;

  auto fly_wings(std::make_shared<FlyWings>());
  auto quack(std::make_shared<Quack>());

  Duck d(std::move(fly_wings), std::move(quack));

  d.PerformFly();
  d.PerformQuack();

  auto fly_simulation(std::make_shared<FlySimulation>());
  auto quack_simulation(std::make_shared<QuackSimulation>());

  d.SetFlyBehavior(std::move(fly_simulation));
  d.SetQuackBehavior(std::move(quack_simulation));

  d.PerformFly();
  d.PerformQuack();

  return 0;
}