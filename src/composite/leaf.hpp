#ifndef _DESIGN_PATTERN_COMPONENT_LEAF_H_
#define _DESIGN_PATTERN_COMPONENT_LEAF_H_

#include <string>

#include "component.hpp"

class Leaf : public Component
{
public:
    
  explicit Leaf(std::string &&name, std::string &&description);
  virtual ~Leaf() = default;

  virtual void Add(std::unique_ptr<Component> &&) override;
  virtual void Remove(std::unique_ptr<Component> &&) override;
  virtual const std::string GetName(void) override;
  virtual const std::string GetDescription(void) override;
  virtual void Print(void) override;

  Leaf(const Leaf &) = delete;
  Leaf& operator=(const Leaf &) = delete;
  Leaf(Leaf &&) = delete;
  Leaf& operator=(Leaf &&) = delete;

  std::string name_;
  std::string description_;
};

#endif 