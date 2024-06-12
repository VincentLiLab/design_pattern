#ifndef _DESIGN_PATTERN_PROXY_IMAGE_ICON_PROXY_H_
#define _DESIGN_PATTERN_PROXY_IMAGE_ICON_PROXY_H_

#include "icon.hpp"
#include "image_icon.hpp"

class ImageIconProxy : public Icon
{
public:
  ImageIconProxy() = default;
  virtual ~ImageIconProxy() = default;

  virtual int GetIconWidth(void) override;
  virtual int GetIconHeight(void) override;
  virtual void PaintIcon(void) override;

  ImageIconProxy(const ImageIconProxy &) = delete;
  ImageIconProxy& operator=(const ImageIconProxy &) = delete;
  ImageIconProxy(ImageIconProxy &&) = delete;
  ImageIconProxy& operator=(ImageIconProxy &&) = delete;

private:
  ImageIcon icon_;
  void Erase(void);
};

#endif 