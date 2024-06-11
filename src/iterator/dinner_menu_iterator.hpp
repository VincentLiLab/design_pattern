#ifndef _DESIGN_PATTERN_ITERATOR_DINNER_MENU_ITERATOR_H_
#define _DESIGN_PATTERN_ITERATOR_DINNER_MENU_ITERATOR_H_

#include "iterator.hpp"
#include "menu_item.hpp"
#include <list>

class DinnerMenuIterator : public iterator::Iterator
{
public:
  explicit DinnerMenuIterator(std::list<MenuItem> &&);
  virtual ~DinnerMenuIterator() = default;

  virtual bool HasNext(void) const override;
  virtual MenuItem& Next(void) override;

  DinnerMenuIterator(const DinnerMenuIterator &) = delete;
  DinnerMenuIterator& operator=(const DinnerMenuIterator &) = delete;
  DinnerMenuIterator(DinnerMenuIterator &&) = delete;
  DinnerMenuIterator& operator=(DinnerMenuIterator &&) = delete;

private:
  std::list<MenuItem> menu_item_;
  std::list<MenuItem>::iterator it_;
};

#endif 