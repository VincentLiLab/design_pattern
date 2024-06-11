#ifndef _DESIGN_PATTERN_FACTORY_PIZZA_H_
#define _DESIGN_PATTERN_FACTORY_PIZZA_H_

class Pizza
{
public:
  Pizza() = default;
  virtual ~Pizza() = default;
  virtual void Bake(void) = 0;
  virtual void Cut(void) = 0;
  virtual void Box(void) = 0;

  Pizza(const Pizza &) = delete;
  Pizza& operator=(const Pizza &) = delete;
  Pizza(Pizza &&) = delete;
  Pizza& operator=(Pizza &&) = delete;
};

#endif 
