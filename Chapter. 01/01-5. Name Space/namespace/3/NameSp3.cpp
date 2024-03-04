#include <iostream>

namespace BestComImpl
{
  void SimpleFunc(void);
}

namespace BestComImpl
{
  void PrettyFunc(void);
}

namespace ProgComImpl
{
  void SimpleFunc(void);
}

int main(void)
{
  BestComImpl::SimpleFunc();
}

void BestComImpl::SimpleFunc(void)
{
  std::cout<<"BestCom Func"<<std::endl;
  PrettyFunc();
  ProgComImpl::SimpleFunc();
}

void BestComImpl::PrettyFunc(void)
{
  std::cout<<"So Pretty!!"<<std::endl;
}

void ProgComImpl::SimpleFunc(void)
{
  std::cout<<"ProgCom Func"<<std::endl;
}