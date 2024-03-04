#include <iostream>
using namespace std;

int var = 100;

void Simple()
{
  int var = 10;

  var *= 10;
  cout<<"var = "<<var<<endl;

  ::var *= 10;
  cout<<"::var = "<<::var<<endl;
}

int main(void)
{
  Simple();
}