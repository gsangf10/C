// 문제 : 아래와 같이 출력되도록, change 함수를 구현해주세요.

#include <stdio.h>

void change(char**** pppp) {
  // 정답 V1
  ****pppp = 'a';
  *(***pppp + 1) = 'b';
  *(***pppp + 2) = 'c';
  *(***pppp + 3) = 'd';
  *(***pppp + 4) = '\0';

  // 정답 V2
  (***pppp)[0] = 'a';
  (***pppp)[1] = 'b';
  (***pppp)[2] = 'c';
  (***pppp)[3] = 'd';
  (***pppp)[4] = '\0';

  // 정답 V3
  pppp[0][0][0][0] = 'a';
  pppp[0][0][0][1] = 'b';
  pppp[0][0][0][2] = 'c';
  pppp[0][0][0][3] = 'd';
  pppp[0][0][0][4] = '\0';

  // 정답 V4
  *(pppp[0][0][0] + 0) = 'a';
  *(pppp[0][0][0] + 1) = 'b';
  *(pppp[0][0][0] + 2) = 'c';
  *(pppp[0][0][0] + 3) = 'd';
  *(pppp[0][0][0] + 4) = '\0';
}

int main(void) {
  char str[10];

  char* p = str;
  char** pp = &p;
  char*** ppp = &pp;
  change(&ppp);

  printf("%s\n", str);
  // 출력 => abcd

  return 0;
}
