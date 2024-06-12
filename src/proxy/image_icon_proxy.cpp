#include "image_icon_proxy.hpp"

#include <iostream>

int ImageIconProxy::GetIconWidth(void) {
  return this->icon_.GetIconWidth();
}

int ImageIconProxy::GetIconHeight(void) {
  return this->icon_.GetIconHeight();
}

void ImageIconProxy::PaintIcon(void) {
  this->Erase();
  this->icon_.PaintIcon();
}

void ImageIconProxy::Erase(void) {
  std::cout << "ImageIconProxy::Erase" << std::endl;
}