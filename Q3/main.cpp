#include<iostream>
#include"cube.h"
#include"sphere.h"
#include"circle.h"
#include"square.h"
#include"point.h"
int main()
{
  Shape* h[4];
  Square s(2,2,2);
  h[0]=&s;
  Circle c(2,2,2);
  h[1]=&c;
  Sphere sp(4);
  h[2]=&sp;
  Cube cu(3);
  h[3]=&cu;
  for(int i{};i<4;i++)
    std::cout<<*(h[i])<<std::endl;
  Point p1(4,0,5);
  for(int i{};i<4;i++)
    *(h[i])+p1;
  for(int i{};i<4;i++)
    std::cout<<*(h[i])<<std::endl;
  return 0;
}
