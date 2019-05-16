#include<iostream>
#include"point.h"
#ifndef SHAPE_H
#define SHAPE_H
class Shape
{
 public:
  Shape()=default;
  virtual ~Shape()=default;
  virtual std::ostream& print(std::ostream& os);
  virtual void operator+(Point a);
  friend std::ostream& operator<<(std::ostream& os,Shape& c);
};

#endif
