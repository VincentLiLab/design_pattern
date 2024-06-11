#ifndef _DESIGN_PATTERN_ADAPTER_ITERATOR_H_
#define _DESIGN_PATTERN_ADAPTER_ITERATOR_H_

class Iterator
{
public:
  Iterator() = default;
  virtual ~Iterator() = default;

  virtual bool HasNext(void) const = 0 ;

  Iterator(const Iterator &) = delete;
  Iterator& operator=(const Iterator &) = delete;
  Iterator(Iterator &&) = delete;
  Iterator& operator=(Iterator &&) = delete;
};

#endif 