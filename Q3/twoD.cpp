#include"twoD.h"
#include<iostream>

TwoD::TwoD() : Shape()
{}

TwoD::TwoD(int m) :Shape()
{
  numberOfSideWays=m;
}

 double TwoD:: getSurrondings() const
{
  double temp{},a{};
  std::cout<<"Please enter size Of SideWays."<<std::endl;
  for(int i{};i<numberOfSideWays;i++)
    {
      std::cout<<"enter size:";
      std::cin>>temp;
      a += temp;
    }  
  return a;
}

std::ostream& TwoD:: print(std::ostream& os)
{
  os<<"* TwoD shape";
  os<<std::endl<<" Surrondings:"<<getSurrondings();
  os<<std::endl<<" number Of sideWays:"<<numberOfSideWays;
  os<<std::endl;
  return os;
}

std::ostream& operator<<(std::ostream& os,TwoD& c)
{
  return c.print(os);
}  
