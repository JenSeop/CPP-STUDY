#include <iostream>

namespace BestComImpl
{
  void SimpleFunc(void);
}

namespace ProgComImpl
{
  void SimpleFunc(void);
}

int main(void)
{
  BestComImpl::SimpleFunc();
  ProgComImpl::SimpleFunc();
}

void BestComImpl::SimpleFunc(void)
{
  std::cout<<"BestCom Func"<<std::endl;
}

void ProgComImpl::SimpleFunc(void)
{
  std::cout<<"ProgCom Func"<<std::endl;
}