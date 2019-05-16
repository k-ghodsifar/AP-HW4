#include<iostream>
#include"sphere.h"

Sphere::Sphere(double radius): ThreeD()
{
  this->radius=radius;
}

Sphere::Sphere(double radius,double x,double y,double z) : ThreeD()
{
  this->radius = radius;
  this->x=x;
  this->y=y;
  this->z=z;
}

double Sphere::getArea() const
{
  return (3.14)*radius*radius*4;
}

double Sphere::getVolume() const
{
  return (1.33)*(3.14)*radius*radius*radius;
}

std::ostream& Sphere::print(std::ostream& os)
{
  os<<"*Sphere:"<<std::endl;
  os<<" loacation:("<<x<<","<<y<<","<<z<<")"<<std::endl;
  os<<" radius:"<<radius<<std::endl;
  os<<" Area:"<<getArea()<<std::endl;
  os<<" volume:"<<getVolume();
  return os;
}

void Sphere::operator+(Point a)
{
  x=x+a.x;
  y=y+a.y;
  z=a.z;
}

std::ostream& operator<<(std::ostream& os,Sphere& c)
{
  return c.print(os); 
}
