// 문제 : `names` 배열에 이름 10개를 넣어주세요.
// 조건 : 수정가능지역만 수정할 수 있습니다.
// 출력예시
/*
1번째 사람의 이름을 입력해주세요 : 11
2번째 사람의 이름을 입력해주세요 : 22
3번째 사람의 이름을 입력해주세요 : 33
4번째 사람의 이름을 입력해주세요 : 44
5번째 사람의 이름을 입력해주세요 : 55
6번째 사람의 이름을 입력해주세요 : 66
7번째 사람의 이름을 입력해주세요 : 77
8번째 사람의 이름을 입력해주세요 : 88
9번째 사람의 이름을 입력해주세요 : 99
10번째 사람의 이름을 입력해주세요 : 00
1번째 사람의 이름 : 11
2번째 사람의 이름 : 22
3번째 사람의 이름 : 33
4번째 사람의 이름 : 44
5번째 사람의 이름 : 55
6번째 사람의 이름 : 66
7번째 사람의 이름 : 77
8번째 사람의 이름 : 88
9번째 사람의 이름 : 99
10번째 사람의 이름 : 00
*/

#include <stdio.h>

#pragma warning (disable: 4996)

#define NAMES_COUNT 10 // 이름이 10개 들어가야 한다는 뜻
#define NAMES_SIZE 200 // names 배열의 크기가 총 200바이트 라는 뜻

// 결론적으로 이름하나 저장하는데 20바이트를 쓸 수 있다는 뜻이다.

int main(void) {
  char names[NAMES_SIZE];

  // 수정가능지역 시작
  int k = 1;
  for(int i=0;i<NAMES_SIZE;i+=NAMES_SIZE/NAMES_COUNT){
    printf("%d번째 사람의 이름을 입력해주세요 : ", k);
    scanf("%s", names+i);
    k++;
  }
  k = 1;
  for(int i=0;i<NAMES_SIZE;i+=NAMES_SIZE/NAMES_COUNT){
    printf("%d번째 사람의 이름 : ", k);
    for(int j=0;names[i+j]!='\0';j++){
      printf("%c", names[i+j]);
    }
    printf("\n");
    k++;
  }
  // 수정가능지역 끝

  return 0;
}
