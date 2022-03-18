// 문제 : name1과 name2과 name3의 선언부분에서 총 몇바이트의 메모리를 사용하는지 설명해주세요.

#include <stdio.h>
#include <string.h>

int main(void) {
  char* name1 = "abc";
  // name1 => 8바이트
  // "abc" => 4바이트
  // 총 12바이트 사용
  printf("name1 : %s\n", name1);

  char name2[10] = "bbc";
  // name2 => 8바이트
  // name2가 가리키는 배열의 크기 => 10바이트
  // "bbc" => 4바이트
  // 총 22바이트

  printf("name2 : %s\n", name2);

  char name3[10] = "bbc";
  // name3 => 8바이트
  // name3가 가리키는 배열의 크기 => 10바이트
  // "bbc" => 0바이트 : name2 의 bbc 재활용
  // 총 18바이트

  printf("name3 : %s\n", name3);

  return 0;
}
