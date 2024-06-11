#include "door_off_command.hpp"

#include <memory>

DoorOffCommand::DoorOffCommand(const std::shared_ptr<Door> &door) : 
door_(door) {

}

void DoorOffCommand::Execute(void) {
  this->door_->Off();
}