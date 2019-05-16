#include<iostream>
#include"cube.h"

Cube::Cube(double l) : ThreeD()
{
 lengthOfSideWay = l;
 x=0;
 y=0;
 z=0;
}

Cube::Cube(double l,double x,double y,double z) : ThreeD()
{
  lengthOfSideWay = l;
  this->x=x;
  this->y=y;
  this->z=z;
}

double Cube::getArea() const
{
  return 6*lengthOfSideWay*lengthOfSideWay;
}

double Cube::getVolume() const
{
  return lengthOfSideWay*lengthOfSideWay*lengthOfSideWay;
}

std::ostream& Cube::print(std::ostream& os) 
{
  os<<"*Cube:"<<std::endl;
  os<<" location:("<<x<<","<<y<<","<<z<<")"<<std::endl;
  os<<" length of sideWay:"<<lengthOfSideWay<<std::endl;
  os<<" Volume:"<<getVolume()<<std::endl;
  os<<" Area:"<<getArea()<<std::endl;
  return os;
}

void Cube::operator+(Point a)
{
  x=x+a.x;
  y=y+a.y;
  z=a.z;
}

std::ostream& operator<<(std::ostream& os,Cube& c)
{
  return c.print(os);
}
