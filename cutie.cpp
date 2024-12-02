#include "cutie.hpp"
#include <string>
class Puppy : public Cutie 
{
  std::string description() override 
  {
    return "A little puppy with big, sad eyes";
  }

  int cuteness_rating() override 
  {
    return 11; 
  }
};
class Kitty : public Cutie
{
  std::string description() override 
  {
    return "A little Kitty with big, sad eyes";
  }

  int cuteness_rating() override 
  {
    return 8; 
  }
};
class PygmyMarmoset : public Cutie
{
  std::string description() override 
  {
    return "A little PygmyMarmoset with big, sad eyes";
  }

  int cuteness_rating() override 
  {
    return 6; 
  }
};
