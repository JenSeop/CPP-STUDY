#include <iostream>

int SimpleFunc(int a=10)
{
  return a+1;
}

int SimpleFunc(void)
{
  return 10;
}

int main (void)
{
  std::cout<<SimpleFunc(10)<<std::endl;
  // cant over loading void with SimpleFunc

  return 0;
}