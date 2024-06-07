#ifndef _DESIGN_PATTERN_DECORATOR_MOCHA_H
#define _DESIGN_PATTERN_DECORATOR_MOCHA_H

#include <memory>

#include "beverage.hpp"

class Mocha : public Beverage
{
public:
  explicit Mocha(std::unique_ptr<Beverage> &&beverage);
  virtual ~Mocha(void);

  virtual const double Cost(void) override;
  virtual const std::string GetDescription(void) override;

  Mocha(const Mocha &) = delete;
  Mocha& operator=(const Mocha &) = delete;
  Mocha(Mocha &&) = delete;
  Mocha& operator=(Mocha &&) = delete;  

private:
  std::unique_ptr<Beverage> beverage_;
};

#endif 