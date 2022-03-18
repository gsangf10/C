// 문제 : 변수 str1, str2, str4의 값이 같은 이유를 설명해주세요.

// 변수 abc 의 read-only 주소값

#include <stdio.h>

int main(void) {
  char* str1 = "abc";
  printf("str1 : %ld\n", (long)str1);

  char* str2 = "abc";
  printf("str2 : %ld\n", (long)str2);

  char* str3 = "abcd";
  printf("str3 : %ld\n", (long)str3);

  char* str4 = "abc";
  printf("str4 : %ld\n", (long)str4);

  char str5[10] = "abc";
  printf("str5 : %ld\n", (long)str5);

  return 0;
}
