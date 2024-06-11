#include "enumeration_iterator.hpp"

#include <iostream>

EnumerationAdapter::EnumerationAdapter(std::unique_ptr<Enumeration> && enumeration):
enumeration_(std::move(enumeration)) {

}

bool EnumerationAdapter::HasNext(void) const {
  std::cout << "EnumerationAdapter::HasNext" << std::endl;
  this->enumeration_->HasMoreElements();
  return true;
}