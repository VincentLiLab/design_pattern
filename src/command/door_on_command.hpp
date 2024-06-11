#ifndef _DESIGN_PATTERN_COMMAND_DOOR_ON_COMMAND_H_
#define _DESIGN_PATTERN_COMMAND_DOOR_ON_COMMAND_H_

#include <memory>

#include "command.hpp"
#include "door.hpp"

class DoorOnCommand : public Command 
{
public:
  explicit DoorOnCommand(const std::shared_ptr<Door> &);
  virtual ~DoorOnCommand() = default;

  virtual void Execute(void) override;

  DoorOnCommand(const DoorOnCommand &) = delete;
  DoorOnCommand& operator=(const DoorOnCommand &) = delete;
  DoorOnCommand(DoorOnCommand &&) = delete;
  DoorOnCommand& operator=(DoorOnCommand &&) = delete;

private:    
  std::shared_ptr<Door> door_;
};

#endif 