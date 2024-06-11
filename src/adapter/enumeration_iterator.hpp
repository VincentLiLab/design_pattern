#ifndef _DESIGN_PATTERN_ADAPTER_ENUMERATION_ITERATOR_H_
#define _DESIGN_PATTERN_ADAPTER_ENUMERATION_ITERATOR_H_

#include <memory>

#include "enumeration.hpp"
#include "iterator.hpp"


class EnumerationAdapter : public Iterator
{
public:
  explicit EnumerationAdapter(std::unique_ptr<Enumeration> &&);
  virtual ~EnumerationAdapter() = default;

  virtual bool HasNext(void) const override;

  EnumerationAdapter(const EnumerationAdapter &) = delete;
  EnumerationAdapter& operator=(const EnumerationAdapter &) = delete;
  EnumerationAdapter(EnumerationAdapter &&) = delete;
  EnumerationAdapter& operator=(EnumerationAdapter &&) = delete;

private:
  std::unique_ptr<Enumeration> enumeration_;
};

#endif 