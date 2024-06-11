#include <iostream>
#include <memory>

#include "src/adapter/enumeration.hpp"
#include "src/adapter/iterator.hpp"
#include "src/adapter/enumeration_iterator.hpp"

void function(const adapter::Iterator &it) {
  it.HasNext();
}

int main(int, char *[])
{
  std::cout << "adapter test" << std::endl;

  auto enumeration = std::make_unique<Enumeration>();

  EnumerationAdapter enumeration_iterator(std::move(enumeration));

  function(enumeration_iterator);

  return 0;
}