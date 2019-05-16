#include<iostream>
#include"threeD.h"

ThreeD::ThreeD() : Shape()
{
}

std::ostream& ThreeD:: print(std::ostream& os)
{
  os<<"hello I`m a empty ThreeD shape."<<std::endl;
  return os;
}

std::ostream& operator<<(std::ostream& os,ThreeD& c)
{
  return c.print(os);
}


