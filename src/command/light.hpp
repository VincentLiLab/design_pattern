#ifndef _DESIGN_PATTERN_COMMAND_LIGHT_H_
#define _DESIGN_PATTERN_COMMAND_LIGHT_H_

class Light
{
public:
  Light() = default;
  ~Light() = default;
  void On(void);
  void Off(void);

  Light(const Light &) = delete;
  Light& operator=(const Light &) = delete;
  Light(Light &&) = delete;
  Light& operator=(Light &&) = delete;
};

#endif