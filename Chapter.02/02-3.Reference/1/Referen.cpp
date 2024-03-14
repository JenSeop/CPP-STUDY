#include <iostream>
using namespace std;

int main(void)
{
  int num1 = 1020;
  int &num2 = num1;
  // num1의 참조자 num2는 동일한 메모리 공간을 참조

  num2 = 3047;
  cout<<"VAL : "<<num1<<endl;
  cout<<"REF : "<<num2<<endl;
  // 동일한 값이 출력되면 num1, num2가 동일한 메모리 공간 참조를 증명

  cout<<"VAL : "<<&num1<<endl;
  cout<<"REF : "<<&num2<<endl;
  // num1, num2의 주소값 출력

  return 0;
}