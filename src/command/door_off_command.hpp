#ifndef _DESIGN_PATTERN_COMMAND_DOOR_OFF_COMMAND_H_
#define _DESIGN_PATTERN_COMMAND_DOOR_OFF_COMMAND_H_

#include <memory>

#include "command.hpp"
#include "door.hpp"

class DoorOffCommand : public Command 
{
public:
  explicit DoorOffCommand(const std::shared_ptr<Door> &door);
  virtual ~DoorOffCommand() = default;

  virtual void Execute(void) override;

  DoorOffCommand(const DoorOffCommand &) = delete;
  DoorOffCommand& operator=(const DoorOffCommand &) = delete;
  DoorOffCommand(DoorOffCommand &&) = delete;
  DoorOffCommand& operator=(DoorOffCommand &&) = delete;

private:    
  std::shared_ptr<Door> door_;
};

#endif 