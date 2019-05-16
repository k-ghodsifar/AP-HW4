#include"twoD.h"
#include"point.h"
#ifndef SQUARE_H
#define SQUARE_H

class Square : public TwoD
{
 public:
  Square(double,double,double);
  virtual ~Square()=default;
  virtual double getSurrondings()const override;
  virtual std::ostream& print(std::ostream&) override;
  friend std::ostream& operator<<(Square& c,std::ostream& os);
  virtual void operator+(Point) override;
 private:
  double sideWay;
  double x;
  double y;
};
#endif
