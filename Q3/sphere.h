#include"threeD.h"
#include"point.h"
#ifndef SPHERE_H
#define SPHERE_H
class Sphere : public ThreeD
{
 public:
  Sphere(double);
  Sphere(double,double,double,double);
  virtual ~Sphere()=default;
  virtual std::ostream& print(std::ostream&) override;
  double getVolume()const;
  double getArea() const;
  virtual void operator+(Point a)override;
  friend std::ostream& operator<<(std::ostream& os,Sphere& c);

 private:
  double radius;
  double x{};
  double y{};
  double z{};
};
#endif
