#ifndef _DESIGN_PATTERN_COMMAND_DOOR_H_
#define _DESIGN_PATTERN_COMMAND_DOOR_H_

class Door
{
public:
  Door() = default;
  ~Door() = default;
  void On(void);
  void Off(void);

  Door(const Door &) = delete;
  Door& operator=(const Door &) = delete;
  Door(Door &&) = delete;
  Door& operator=(Door &&) = delete;
};

#endif