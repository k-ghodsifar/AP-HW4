#include"shape.h"
#ifndef THREE_H
#define THREE_H
class ThreeD : public Shape{
 public:
  ThreeD();
  virtual std::ostream& print(std::ostream& os) override;
  friend std::ostream& operator<<(std::ostream& os,ThreeD& c);  
  ~ThreeD()=default;
};
#endif
