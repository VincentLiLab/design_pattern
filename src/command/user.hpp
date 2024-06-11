#ifndef _DESIGN_PATTERN_COMMAND_USER_H_
#define _DESIGN_PATTERN_COMMAND_USER_H_

#include <memory>

#include "command.hpp"

class User
{
public:
  explicit User(std::unique_ptr<Command> &&);
  ~User() = default;

  void SetCommand(std::unique_ptr<Command> &&);
  void Pressed(void);

  User(const User &) = delete;
  User& operator=(const User &) = delete;
  User(User &&) = delete;
  User& operator=(User &&) = delete;

private:
    std::unique_ptr<Command> command_;
};

#endif