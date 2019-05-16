#include"twoD.h"
#include"square.h"
#include<iostream>

Square::Square(double sideWay,double x,double y) : TwoD(4)
{
  this->sideWay=sideWay;
  this->x=x;
  this->y=y;
}

double Square:: getSurrondings() const 
{
  return 4*sideWay;
}

std::ostream& Square:: print(std::ostream& os) 
{
  os<<"*Square:"<<std::endl;
  os<<" Area:"<<sideWay*sideWay;
  os<<std::endl<<" Surrondings:"<<4*sideWay;
  os<<std::endl<<" length of sideWay:"<<sideWay;
  os<<std::endl<<" location:("<<x<<","<<y<<")";
  os<<std::endl;
  return os;
}

std::ostream& operator<<(std::ostream& os,Square& c)
{
  return c.print(os);
  }

void Square::operator+(Point a)
{
  x=x+a.x;
  y=y+a.y;
}
