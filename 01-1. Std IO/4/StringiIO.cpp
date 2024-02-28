#include <iostream>

int main(void)
{
  char name[100];
  char lang[200];

  std::cout<<"name: ";
  std::cin>>name;

  std::cout<<"lang: ";
  std::cin>>lang;

  std::cout<<"my name is "<<name<<", my lang is "<<lang<<std::endl;
  return 0;
}