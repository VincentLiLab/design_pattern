#ifndef _DESIGN_PATTERN_TEMPLATE_TEA_H_
#define _DESIGN_PATTERN_TEMPLATE_TEA_H_

#include "caffeine.hpp"

class Tea : public Caffeine
{
public:
  Tea() = default;
  virtual ~Tea() = default;

  Tea(const Tea &) = delete;
  Tea& operator=(const Tea &) = delete;
  Tea(Tea &&) = delete;
  Tea& operator=(Tea &&) = delete;

private:
  virtual void Brew(void) override;
  virtual void AddCondiments(void) override;
};

#endif 