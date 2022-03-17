// 문제 : 고객에게 숫자를 10개 입력받아서 배열에 넣기
// 조건 : 변수를 2개만 사용해주세요.
// 조건 : 배열 문법을 쓸 수 없습니다.

#include <stdio.h>

int main(void) {
  int num[10];
  for(int i=0;i<10;i++){
    scanf("%d", num + i);
    
    printf("%d번째 입력받은 숫자 : %d\n", i + 1, *(num + i));
  }
  // for(int j=0;j<10;j++){
  //   printf("%d번째 입력받은 숫자 : %d\n", j + 1, num[j]);
  // }
  return 0;
}
