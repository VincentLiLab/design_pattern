#ifndef _DESIGN_PATTERN_COMPONENT_NODE_H_
#define _DESIGN_PATTERN_COMPONENT_NODE_H_

#include <memory>
#include <string>
#include <list>

#include "component.hpp"

class Node : public Component
{
public:
    
  explicit Node(std::string &&name, std::string &&description);
  virtual ~Node() = default;

  virtual void Add(std::unique_ptr<Component> &&) override;
  virtual void Remove(std::unique_ptr<Component> &&) override;
  virtual const std::string GetName(void) override;
  virtual const std::string GetDescription(void) override;
  virtual void Print(void) override;

  Node(const Node &) = delete;
  Node& operator=(const Node &) = delete;
  Node(Node &&) = delete;
  Node& operator=(Node &&) = delete;

  std::string name_;
  std::string description_;
  std::list<std::unique_ptr<Component>> list_;
};


#endif 