// 문제 : `names` 배열에 이름 10개를 넣어주세요.
// 조건 : 수정가능지역만 수정할 수 있습니다.

#include <stdio.h>

#pragma warning (disable: 4996)

#define NAMES_COUNT 10

int main(void) {
  // 각각의 이름은 19 바이트 만큼 저장 가능합니다.
  char names[NAMES_COUNT][20];

  // 수정가능지역 시작  
  for ( int i = 0; i < NAMES_COUNT; i++ ) {
    printf("%d번째 사람의 이름을 입력해주세요 : ", i + 1);
    scanf("%s", names[i]);
  }

  for ( int i = 0; i < NAMES_COUNT; i++ ) {
    printf("%d번째 사람의 이름 : %s\n", i + 1, names[i]);
  }
  // 수정가능지역 끝

  return 0;
}
