#ifndef _DESIGN_PATTERN_DECORATOR_WHIP_H
#define _DESIGN_PATTERN_DECORATOR_WHIP_H

#include <memory>

#include "beverage.hpp"

class Whip : public Beverage
{
public:
  explicit Whip(std::unique_ptr<Beverage> &&beverage);
  virtual ~Whip(void);

  virtual const double Cost(void) override;
  virtual const std::string GetDescription(void) override;

  Whip(const Whip &) = delete;
  Whip& operator=(const Whip &) = delete;
  Whip(Whip &&) = delete;
  Whip& operator=(Whip &&) = delete;  

private:
  std::unique_ptr<Beverage> beverage_;
};

#endif 