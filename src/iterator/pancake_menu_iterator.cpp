#include "pancake_menu_iterator.hpp"
#include "menu_item.hpp"

PancakeMenuIterator::PancakeMenuIterator(std::vector<MenuItem> &&menu_item) : 
menu_item_(std::move(menu_item)),
it_(menu_item_.begin()) {

}

bool PancakeMenuIterator::HasNext(void) const {
  return this->it_ != this->menu_item_.cend();
}

MenuItem& PancakeMenuIterator::Next(void) {
  auto &&menu_item = *this->it_;
  this->it_++;
  return menu_item;
}