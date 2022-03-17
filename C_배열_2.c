// 문제 : 아래 질문에 답해주세요.

/* 힌트
- 변수에는 오직 값이 1개만 들어갈 수 있다.
  - int arr[3]; arr[0] = 100; arr[1] = 200; arr[2] = 300;
    - 여기서 arr에 100과 200과 300이 들어있다는 말은 틀린말입니다.
- 포인터(주소값) 저장하는 변수는 무조건 8바이트 입니다.
- 변수는 공간 1개만 관리합니다.
  - int a = 10; // a는 4바이트를 관리합니다.
  - int b = 20; // b는 4바이트를 관리합니다.
- 변수 1개로 공간 100개 관리하려면?
*/

#include <stdio.h>

// 질문 : sub1 함수는 몇 바이트 짜리 함수 인가요?
// 0byte
void sub1() {
}

// 질문 : sub2 함수는 몇 바이트 짜리 함수 인가요?
// 8byte
void sub2() {
  int* arr;
}

// 질문 : sub3 함수는 몇 바이트 짜리 함수 인가요?
// 24byte
void sub3() {
  int arr[4];
}

// 질문 : arr1의 메모리 구조와 arr2의 메모리 구조를 비교해서 설명해주세요.
// arr1     8byte   arr2  8byte
// arr1[0]  4byte
// arr1[1]  4byte
// arr1[2]  4byte
// arr1[3]  4byte
void sub4() {
  int arr1[4];
  int* arr2;
}

int main(void) {
  sub1();
  sub2();
  sub3();
  sub4();
  
  return 0;
}
