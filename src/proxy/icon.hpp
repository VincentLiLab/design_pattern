#ifndef _DESIGN_PATTERN_PROXY_ICON_H_
#define _DESIGN_PATTERN_PROXY_ICON_H_

class Icon
{
public:
  Icon() = default;
  virtual ~Icon() = default;

  virtual int GetIconWidth(void) = 0;
  virtual int GetIconHeight(void) = 0;
  virtual void PaintIcon(void) = 0;

  Icon(const Icon &) = delete;
  Icon& operator=(const Icon &) = delete;
  Icon(Icon &&) = delete;
  Icon& operator=(Icon &&) = delete;
};

#endif 