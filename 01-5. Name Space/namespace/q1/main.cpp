#include <iostream>
#include "calc.h"

int main(void)
{
  std::cout<<"2+2 = "<<Plus(2,2)<<std::endl;
  std::cout<<"2-2 = "<<Minus(2,2)<<std::endl;
  std::cout<<"2*2 = "<<Multiplication(2,2)<<std::endl;
  std::cout<<"2/2 = "<<Divide(2,2)<<std::endl;
}