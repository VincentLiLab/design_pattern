#ifndef _DESIGN_PATTERN_ITERATOR_ITERATOR_H_
#define _DESIGN_PATTERN_ITERATOR_ITERATOR_H_

#include "menu_item.hpp"

namespace iterator {

class Iterator
{
public:
  Iterator() = default;
  virtual ~Iterator() = default;

  virtual bool HasNext(void) const = 0 ;
  virtual MenuItem& Next(void) = 0;

  Iterator(const Iterator &) = delete;
  Iterator& operator=(const Iterator &) = delete;
  Iterator(Iterator &&) = delete;
  Iterator& operator=(Iterator &&) = delete;
};

}
#endif 