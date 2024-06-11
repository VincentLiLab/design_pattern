#ifndef _DESIGN_PATTERN_ITERATOR_MENU_ITEM_H_
#define _DESIGN_PATTERN_ITERATOR_MENU_ITEM_H_

#include <string>

class MenuItem
{
public:

  explicit MenuItem(std::string &&name, std::string &&description, bool vegetarian, double price);
  ~MenuItem() = default;

  const std::string GetName(void);
  const std::string GetDescription(void);
  bool GetVegetarian(void);
  double GetPrice(void);
   
    
  MenuItem(const MenuItem &) = default;
  MenuItem& operator=(const MenuItem &) = default;
  MenuItem(MenuItem &&) = delete;
  MenuItem& operator=(MenuItem &&) = delete;

private:
    std::string name_;
    std::string description_;
    bool vegetarian_;
    double price_;
};

#endif 