#ifndef _DESIGN_PATTERN_ADAPTER_ENUMERATION_H_
#define _DESIGN_PATTERN_ADAPTER_ENUMERATION_H_

 
class Enumeration
{
public:
  Enumeration() = default;
  virtual ~Enumeration() = default;

  bool HasMoreElements(void) const;

  Enumeration(const Enumeration &) = delete;
  Enumeration& operator=(const Enumeration &) = delete;
  Enumeration(Enumeration &&) = delete;
  Enumeration& operator=(Enumeration &&) = delete;
};




#endif 