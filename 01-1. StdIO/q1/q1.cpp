#include <iostream>

int main(void)
{
  int num[5]={0, };
  int result=0;

  for(int i=0; i<5;i++)
  {
    std::cout<<"input num["<<i<<"]: ";
    std::cin>>num[i];
    result+=num[i];
  }

  std::cout<<"result: "<<result<<std::endl;

  return 0;
}