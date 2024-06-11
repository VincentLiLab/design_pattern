#include "door_on_command.hpp"

#include <memory>

DoorOnCommand::DoorOnCommand(const std::shared_ptr<Door> &door) : 
door_(door) {

}

void DoorOnCommand::Execute(void) {
  this->door_->On();
}