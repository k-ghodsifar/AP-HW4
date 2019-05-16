#include"shape.h"
#include<iostream>

std::ostream& Shape:: print(std::ostream& os)
{
  os<<"hello I`m a empty shape."<<std::endl;
  return os;
}

std::ostream& operator<<(std::ostream& os,Shape& c)
{
  return c.print(os);
}

void Shape::operator+(Point a)
{
  std::cout<<"Nothing to transform."<<std::endl;
}
