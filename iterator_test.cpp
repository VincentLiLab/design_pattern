#include <iostream>
#include <list>
#include <vector>

#include "src/iterator/dinner_menu_iterator.hpp"
#include "src/iterator/pancake_menu_iterator.hpp"
#include "src/iterator/menu_item.hpp"



int main(int, char*[]){
  std::cout << "iterator test" << std::endl;

  MenuItem ml0("ml0", "MenuItem list 0", true, 0.0);
  MenuItem ml1("ml1", "MenuItem list 1", true, 0.0);
  MenuItem ml2("ml2", "MenuItem list 2", true, 0.0);

  std::list<MenuItem> list = {ml0, ml1, ml2};
  DinnerMenuIterator dinner_menu_iterator(std::move(list));
  
  while(dinner_menu_iterator.HasNext()) {
    auto &&menu_item = dinner_menu_iterator.Next();
    std::cout << menu_item.GetName() << " " << menu_item.GetDescription() << std::endl;
  }

  MenuItem mv0("mv0", "MenuItem vector 0", true, 0.0);
  MenuItem mv1("mv1", "MenuItem vector 1", true, 0.0);
  MenuItem mv2("mv2", "MenuItem vector 2", true, 0.0);

  std::vector<MenuItem> vector = {mv0, mv1, mv2};
  PancakeMenuIterator pancake_menu_iterator(std::move(vector));

  while(pancake_menu_iterator.HasNext()) {
    auto &&menu_item = pancake_menu_iterator.Next();
    std::cout << menu_item.GetName() << " " << menu_item.GetDescription() << std::endl;
  }
}