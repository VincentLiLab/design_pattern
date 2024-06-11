#include "user.hpp"

#include <memory>

#include "command.hpp"

User::User(std::unique_ptr<Command> &&command):
command_(std::move(command)) {

}

void User::SetCommand(std::unique_ptr<Command> &&command) {
  this->command_ = std::move(command);
}

void User::Pressed(void) {
  this->command_->Execute();
}