#include"twoD.h"
#include"point.h"
#ifndef CIRCLE_H
#define CIRCLE_H
class Circle : public TwoD
{
 public:
  Circle(double,double,double);
  virtual ~Circle()=default;
  virtual std::ostream& print(std::ostream&) override;
  virtual double getSurrondings() const override;
  double getArea() const;
  virtual void operator+(Point)override;
  friend std::ostream& operator<<(std::ostream& os,Circle& c);
 private:
  double radius;
  double x;
  double y;
};
#endif
