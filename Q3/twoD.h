#include"shape.h"
#ifndef TWOD_H
#define TWOD_H
class TwoD : public Shape
{
 public:
  TwoD();
  TwoD(int);
  virtual ~TwoD()=default;
  virtual double getSurrondings() const;
  virtual std::ostream& print(std::ostream&);
  friend std::ostream& operator<<(std::ostream& os,TwoD& c);
  int numberOfSideWays;
};
#endif
