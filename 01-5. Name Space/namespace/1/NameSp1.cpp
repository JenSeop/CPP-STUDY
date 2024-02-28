#include <iostream>

namespace BestComImpl
{
  void SimpleFunc(void)
  {
    std::cout<<"BestCom"<<std::endl;
  }
}

namespace ProgComImpl
{
  void SimpleFunc(void)
  {
    std::cout<<"ProgCom"<<std::endl;
  }
}

int main(void)
{
  BestComImpl::SimpleFunc();
  ProgComImpl::SimpleFunc();
}