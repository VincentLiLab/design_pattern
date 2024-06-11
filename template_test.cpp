#include <iostream>

#include "src/template/caffe.hpp"
#include "src/template/tea.hpp"


int main(int, char *[])
{
  std::cout << "template test" << std::endl;

  Caffe caffe;
  caffe.PrepareRecipe();
  
  Tea tea;
  tea.PrepareRecipe();

  return 0;
}