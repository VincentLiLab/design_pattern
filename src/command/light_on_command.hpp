#ifndef _DESIGN_PATTERN_COMMAND_LIGHT_ON_COMMAND_H_
#define _DESIGN_PATTERN_COMMAND_LIGHT_ON_COMMAND_H_

#include <memory>

#include "command.hpp"
#include "light.hpp"

class LightOnCommand : public Command 
{
public:
  LightOnCommand(const std::shared_ptr<Light> &);
  virtual ~LightOnCommand() = default;

  virtual void Execute(void) override;

  LightOnCommand(const LightOnCommand &) = delete;
  LightOnCommand& operator=(const LightOnCommand &) = delete;
  LightOnCommand(LightOnCommand &&) = delete;
  LightOnCommand& operator=(LightOnCommand &&) = delete;

private:    
  std::shared_ptr<Light> light_;
};

#endif 