#include <iostream>
using namespace std;

int main(void)
{
  int num = 12;
  int *ptr = &num;
  int **dptr = &ptr;

  int &ref = num;
  int *(&pref) = ptr;
  int **(&dpref) = dptr;
  // 포인터 변수의 참조자 선언도 &를 사용

  cout<<ref<<endl;
  cout<<*pref<<endl;
  // pref은 포인터 변수 ptr의 참조자
  // 변수 num에 저장된 값이 출력
  cout<<**dpref<<endl;
  // dpref은 포인터 변수 dptr의 참조자
  // 변수 num에 저장된 값이 출력

  return 0;
}