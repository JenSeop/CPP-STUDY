#include <iostream>

int main(void)
{
  int num=0;

  std::cout<<"choose num: ";
  std::cin>>num;

  for(int i=1; i<10; i++)
    std::cout<<num<<"x"<<i<<": "<<num*i<<std::endl;

  return 0;
}