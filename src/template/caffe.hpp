#ifndef _DESIGN_PATTERN_TEMPLATE_CAFFE_H_
#define _DESIGN_PATTERN_TEMPLATE_CAFFE_H_

#include "caffeine.hpp"

class Caffe : public Caffeine
{
public:
  Caffe() = default;
  virtual ~Caffe() = default;

  Caffe(const Caffe &) = delete;
  Caffe& operator=(const Caffe &) = delete;
  Caffe(Caffe &&) = delete;
  Caffe& operator=(Caffe &&) = delete;

private:
  virtual void Brew(void) override;
  virtual void AddCondiments(void) override;
};

#endif 