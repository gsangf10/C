// 문제 : 배열을 훼손하는 change 함수를 만들어주세요.(배열의 포인터)

#include <stdio.h>

void change(int** p) {
  **p = 200;
  *(*p + 1) = 400;
}
int main(void) {
  int x[2] = {100, 200};
  // x : 배열변수
  // x의 값은 자동으로 x[0]의 주소값을 가진다.
  // x == &x[0]
  // x의 타입은 int* 이다.

  printf("change 함수를 호출하기 전, x[0] : %d, x[1] : %d\n", x[0], x[1]);

  int* p = x;
  change(&p);

  printf("change 함수를 호출하기 전, x[0] : %d, x[1] : %d\n", x[0], x[1]);
  // 출력 => change 함수를 호출하기 전, x[0] : 200, x[1] : 400

  return 0;
}
