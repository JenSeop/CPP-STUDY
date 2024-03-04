#include <iostream>

void myFunc(void)
{
  std::cout<<"myFunc(void) called"<<std::endl;
}

void myFunc(char c)
{
  std::cout<<"myFunc(char c) called"<<std::endl;
}

void myFunc(int a, int b)
{
  std::cout<<"myFunc(int a, intb) called"<<std::endl;
}

int main(void)
{
  myFunc();
  myFunc('A');
  myFunc(12, 13);

  return 0;
}