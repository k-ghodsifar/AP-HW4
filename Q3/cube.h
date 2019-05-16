#include"threeD.h"
#include"point.h"
#ifndef CUBE_H
#define CUBE_H
class Cube : public ThreeD
{
 public:
  Cube(double);
  Cube(double,double,double,double);
  virtual ~Cube()=default;
  virtual std::ostream& print(std::ostream&) override;
  double getArea() const;
  double getVolume() const;
  virtual void operator+(Point a) override;
  friend std::ostream& operator<<(std::ostream& os,Cube& c);
  
 private:
  double lengthOfSideWay;
  double x;
  double y;
  double z;
};
#endif
