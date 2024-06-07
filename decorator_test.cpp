#include <iostream>
#include <memory>

#include "src/decorator/whip.hpp"
#include "src/decorator/mocha.hpp"
#include "src/decorator/espresso.hpp"
#include "src/decorator/house_blend.hpp"


int main(int, char *[])
{
  std::cout << "decorator test" << std::endl;

  auto house_blend(std::make_unique<HouseBlend>());
  // auto espresso(std::make_unique<Espresso>());
  
  auto mocha(std::make_unique<Mocha>(std::move(house_blend)));

  std::cout << mocha->GetDescription() << " cost " << mocha->Cost() << " " << std::endl;

  Whip whip(std::move(mocha));

  std::cout << whip.GetDescription() << " cost " << whip.Cost() << " " << std::endl;
  return 0;
}