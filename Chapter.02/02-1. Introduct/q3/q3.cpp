/*

Call-by-value vs. Call-by-reference

1. 함수의 호출 형태는 크게 값에 의한 호출(Call-by-value)와 참조에 의한 호출 (Call-by-reference)로 나뉜다.
2. 이 둘을 나누는 기준은 무엇이며, 두 int형 변수의 값을 교환하는 Swap 함수를 예로 들어 설명해보자.

- Answer

1. 값에 의한 호출 (Call-by-value)

  - 함수에 매개 변수로 전달되는 것은 변수의 값 자체
  - 함수 내에서 매개변수의 값이 변경되어도 호출된 곳에서는 영향을 받지 않음
  - 기본 데이터 타입(int, float, double 등)을 인자로 전달할 때 사용

2. 참조에 의한 호출 (Call-by-reference)

  - 함수에 매개변수로 전달되는 것은 변수의 메모리 주소
  - 함수 내에서 매개변수를 통해 값이 변경되면 호출된 곳도 영향
  - 포인터나 참조(reference)를 사용하여 변수의 주소를 전달할 때 사용

*/

#include <iostream>

using namespace std;

// swap_by_value는 값을 복사하여 처리, 호출된 x, y의 값은 불변
void swap_by_value(int a, int b)
{
  int temp = a;
  a = b;
  b = temp;
}

// swap_by_reference는 변수의 참조를 전달하여 값을 변경
// ans2 = swap_by_reference(int *a, int *b)
void swap_by_reference(int &a, int &b)
{
  int temp = a;
  a = b;
  b= temp;
}

int main(void)
{
  int x = 5, y = 10;

  swap_by_value(x, y);
  cout<<"x - "<<x<<" y - "<<y<<endl;

  swap_by_reference(x, y);
  // ans2 = swap_by_reference(&x, &y);
  cout<<"x - "<<x<<" y - "<<y<<endl;
}