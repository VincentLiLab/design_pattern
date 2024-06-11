#ifndef _DESIGN_PATTERN_COMMAND_COMMAND_H_
#define _DESIGN_PATTERN_COMMAND_COMMAND_H_

class Command
{
public:
  Command() = default;
  virtual ~Command() = default;
  virtual void Execute(void) = 0;

  Command(const Command &) = delete;
  Command& operator=(const Command &) = delete;
  Command(Command &&) = delete;
  Command& operator=(Command &&) = delete;
};

#endif