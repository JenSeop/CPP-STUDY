#include <iostream>

int main(void)
{
  char name[100];
  char numb[100];

  std::cout<<"name: ";
  std::cin>>name;

  std::cout<<"number: ";
  std::cin>>numb;

  std::cout<<name<<"/"<<numb<<std::endl;

  return 0;
}