#ifndef _DESIGN_PATTERN_ITERATOR_PANCAKE_MENU_ITERATOR_H_
#define _DESIGN_PATTERN_ITERATOR_PANCAKE_MENU_ITERATOR_H_

#include "iterator.hpp"
#include "menu_item.hpp"
#include <vector>

class PancakeMenuIterator : public iterator::Iterator
{
public:
  explicit PancakeMenuIterator(std::vector<MenuItem> &&);
  virtual ~PancakeMenuIterator() = default;

  virtual bool HasNext(void) const override;
  virtual MenuItem& Next(void) override;

  PancakeMenuIterator(const PancakeMenuIterator &) = delete;
  PancakeMenuIterator& operator=(const PancakeMenuIterator &) = delete;
  PancakeMenuIterator(PancakeMenuIterator &&) = delete;
  PancakeMenuIterator& operator=(PancakeMenuIterator &&) = delete;

private:
  std::vector<MenuItem> menu_item_;
  std::vector<MenuItem>::iterator it_;
};

#endif 