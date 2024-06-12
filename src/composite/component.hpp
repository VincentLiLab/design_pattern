#ifndef _DESIGN_PATTERN_COMPONENT_COMPONENT_H_
#define _DESIGN_PATTERN_COMPONENT_COMPONENT_H_

#include <string>
#include <memory>

class Component
{
public:

  Component() = default;
  virtual ~Component() = default;

  virtual void Add(std::unique_ptr<Component> &&) = 0;
  virtual void Remove(std::unique_ptr<Component> &&) = 0;
  virtual const std::string GetName(void) = 0;
  virtual const std::string GetDescription(void) = 0;
  virtual void Print(void) = 0;

  Component(const Component &) = delete;
  Component& operator=(const Component &) = delete;
  Component(Component &&) = delete;
  Component& operator=(Component &&) = delete;
};

#endif