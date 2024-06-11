#include <iostream>
#include <memory>

#include "src/command/door_off_command.hpp"
#include "src/command/door_on_command.hpp"
#include "src/command/light_off_command.hpp"
#include "src/command/light_on_command.hpp"
#include "src/command/door.hpp"
#include "src/command/light.hpp"
#include "src/command/user.hpp"

int main(int, char *[])
{
  std::cout << "command test" << std::endl;

  auto door = std::make_shared<Door>();
  auto light = std::make_shared<Light>();

  auto door_on_command = std::make_unique<DoorOnCommand>(door);
  auto door_off_command = std::make_unique<DoorOffCommand>(door);

  auto light_on_command = std::make_unique<LightOnCommand>(light);
  auto light_off_command = std::make_unique<LightOffCommand>(light);

  std::cout << "door_off_command" << std::endl;
  User user(std::move(door_off_command));
  user.Pressed();

  std::cout << "door_on_command" << std::endl;
  user.SetCommand(std::move(door_on_command));
  user.Pressed();

  std::cout << "light_off_command" << std::endl;
  user.SetCommand(std::move(light_off_command));
  user.Pressed();

  std::cout << "light_on_command" << std::endl;
  user.SetCommand(std::move(light_on_command));
  user.Pressed();

  return 0;
}