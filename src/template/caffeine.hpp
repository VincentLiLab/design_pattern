#ifndef _DESIGN_PATTERN_TEMPLATE_CAFFEINE_H_
#define _DESIGN_PATTERN_TEMPLATE_CAFFEINE_H_


class Caffeine
{
public:
  Caffeine() = default;
  virtual ~Caffeine() = default;

  void PrepareRecipe(void);

  Caffeine(const Caffeine &) = delete;
  Caffeine& operator=(const Caffeine &) = delete;
  Caffeine(Caffeine &&) = delete;
  Caffeine& operator=(Caffeine &&) = delete;

private:
  virtual void BoilWater(void);
  virtual void Brew(void) = 0;
  virtual void PourInCup(void);
  virtual void AddCondiments(void) = 0;

};

#endif 