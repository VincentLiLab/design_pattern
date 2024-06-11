#include "light_off_command.hpp"

#include <memory>

LightOffCommand::LightOffCommand(const std::shared_ptr<Light> &light) : 
light_(light) {

}

void LightOffCommand::Execute(void) {
  this->light_->Off();
}