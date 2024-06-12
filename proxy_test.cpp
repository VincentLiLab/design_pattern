#include <iostream>

#include "src/proxy/image_icon_proxy.hpp"
#include "src/proxy/icon.hpp"


void Function(Icon &icon) {
  icon.GetIconWidth();
  icon.GetIconHeight();
  icon.PaintIcon();
}

int main(int, char *[])
{
  std::cout << "proxy test" << std::endl;

  ImageIconProxy image_icon_proxy;
  Function(image_icon_proxy);

  return 0;
}