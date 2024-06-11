#include "dinner_menu_iterator.hpp"
#include "menu_item.hpp"

DinnerMenuIterator::DinnerMenuIterator(std::list<MenuItem> &&menu_item) : 
menu_item_(std::move(menu_item)),
it_(menu_item_.begin()) {

}

bool DinnerMenuIterator::HasNext(void) const {
  return this->it_ != this->menu_item_.cend();
}

MenuItem& DinnerMenuIterator::Next(void) {
  auto &&menu_item = *this->it_;
  this->it_++;
  return menu_item;
}