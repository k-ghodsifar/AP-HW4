#include<iostream>
#include"circle.h"

Circle::Circle(double radius,double x,double y) : TwoD(0)
{
  this->radius = radius;
  this->x=x;
  this->y=y;
}

double Circle::getArea() const
{
  return (3.14)*radius*radius;
}

double Circle::getSurrondings() const
{
  return 2*(3.14)*radius;
}

std::ostream& Circle::print(std::ostream& os)
{
  os<<"*Circle:"<<std::endl;
  os<<" loacation:("<<x<<","<<y<<")"<<std::endl;
  os<<" Area:"<<getArea()<<std::endl;
  os<<" Surroundings:"<<getSurrondings();
  return os;
}

void Circle::operator+(Point a)
{
  x=x+a.x;
  y=y+a.y;
}

std::ostream& operator<<(std::ostream& os,Circle& c)
{
  return c.print(os); 
}

