// 문제 : 문자배열을 만들고 거기에 문장 `abc`를 저장해주세요.
// 힌트 : c언어에서 모든 문장은 \0(널문자)로 끝나야 한다.

#include <stdio.h>

int main(void) {
  char arr[10];

  // 구현시작
  // scanf("%s", arr);
  arr[0] = 'a';
  
  // 구현끝

  printf("%c%c%c\n", arr[0], arr[1], arr[2]);
  // 출력 => abc

  // %s : 문장으로 출력한다.
  printf("%s\n", arr);
  // 출력 => abc

  // %s : 문장으로 출력한다.
  printf("%s\n", &arr[0]);
  // 출력 => abc

  return 0;
}
