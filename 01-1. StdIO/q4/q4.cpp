#include <iostream>

int main(void)
{
  while(1)
  {
    int tot=0;

    std::cout<<"sales total (-1 to end): ";
    std::cin>>tot;
    if(tot<0)
    {
      std::cout<<"program exit"<<std::endl;
      return 0;
    }
    std::cout<<"salary: "<<50+(tot*0.12)<<std::endl;
  }
  return 0;
}