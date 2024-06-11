#ifndef _DESIGN_PATTERN_COMMAND_LIGHT_OFF_COMMAND_H_
#define _DESIGN_PATTERN_COMMAND_LIGHT_OFF_COMMAND_H_

#include <memory>

#include "command.hpp"
#include "light.hpp"

class LightOffCommand : public Command 
{
public:
  explicit LightOffCommand(const std::shared_ptr<Light> &);
  virtual ~LightOffCommand() = default;

  virtual void Execute(void) override;

  LightOffCommand(const LightOffCommand &) = delete;
  LightOffCommand& operator=(const LightOffCommand &) = delete;
  LightOffCommand(LightOffCommand &&) = delete;
  LightOffCommand& operator=(LightOffCommand &&) = delete;

private:    
  std::shared_ptr<Light> light_;
};

#endif 