#include "light_on_command.hpp"


#include <memory>

LightOnCommand::LightOnCommand(const std::shared_ptr<Light> &light) : 
light_(light) {

}

void LightOnCommand::Execute(void) {
  this->light_->On();
}