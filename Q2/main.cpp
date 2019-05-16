#include<iostream>
#include<vector>
#include<memory>
#include<string>
#include<algorithm>

template<typename T>
void print(std::vector<T> v)
{
  std::cout<<"Capacity:"<<v.capacity()<<std::endl;
  std::cout<<"Size:"<<v.size()<<"------"<<std::endl;
}  

int main()
{
  
  std::string s1{"Str"};
  std::string s2{},s3{};
  std::vector< std::unique_ptr<std::string> > v;

  for(int i{};i<1000;i++)
    {
      s2=std::to_string(i);
      s3=s2+s1;
      v.push_back(std::make_unique<std::string>(s3));
      std::cout<<"Capacity:"<<v.capacity()<<std::endl;
      std::cout<<"Size:"<<v.size()<<std::endl<<"------"<<std::endl;
    }
  std::reverse(v.begin(),v.end());
  std::cout<<"reversed."<<std::endl;
    for(int i{};i<1000;i++)
    {
      s2=std::to_string(i);
      s3=s2+s1;
      v.push_back(std::make_unique<std::string>(s3));
      std::cout<<"Capacity:"<<v.capacity()<<std::endl;
      std::cout<<"Size:"<<v.size()<<std::endl<<"------"<<std::endl;
    }
  return 0;
}


