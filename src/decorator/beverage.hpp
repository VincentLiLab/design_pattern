#ifndef _DESIGN_PATTERN_DECORATOR_BEVERAGE_H_
#define _DESIGN_PATTERN_DECORATOR_BEVERAGE_H_

#include <string>

class Beverage
{
public:
  explicit Beverage(std::string &&description);
  Beverage() = default;
  virtual ~Beverage();

  virtual const double Cost(void);
  virtual const std::string GetDescription(void);

  Beverage(const Beverage &) = delete;
  Beverage& operator=(const Beverage &) = delete;
  Beverage(Beverage &&) = delete;
  Beverage& operator=(Beverage &&) = delete;

private:
  std::string description_;
};

#endif 