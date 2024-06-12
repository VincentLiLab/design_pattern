#ifndef _DESIGN_PATTERN_PROXY_IMAGE_ICON_H_
#define _DESIGN_PATTERN_PROXY_IMAGE_ICON_H_

#include "icon.hpp"

class ImageIcon : public Icon
{
public:
  ImageIcon() = default;
  virtual ~ImageIcon() = default;

  virtual int GetIconWidth(void) override;
  virtual int GetIconHeight(void) override;
  virtual void PaintIcon(void) override;

  ImageIcon(const ImageIcon &) = delete;
  ImageIcon& operator=(const ImageIcon &) = delete;
  ImageIcon(ImageIcon &&) = delete;
  ImageIcon& operator=(ImageIcon &&) = delete;
};

#endif 