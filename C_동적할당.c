// 문제 : 몇명의 사람의 나이를 받을지 입력받고 입력받은 수 만큼 나이를 입력받은 후 저장해주세요.
// 조건 : malloc을 사용해서 낭비없는 메모리 운용을 보여주세요.
// 출력예시
/*
사람의 숫자를 입력해주세요. : 3[엔터]
1번째 사람의 나이를 입력해주세요 : 33[엔터]
2번째 사람의 나이를 입력해주세요 : 50[엔터]
3번째 사람의 나이를 입력해주세요 : 42[엔터]
1번째 사람의 나이 : 33
2번째 사람의 나이 : 50
3번째 사람의 나이 : 42
*/

#include <stdio.h>

#pragma warning (disable: 4996)

int main(void) {

  int n;

  while(1){
    printf("사람의 숫자를 입력해주세요. : ");
    scanf("%d", &n);
    if(n<=0){
      printf("1 이상의 숫자를 입력해주세요.\n");
    } else{
      break;
    }
  }  
  
  int* age = malloc(n * sizeof(int));

  for(int i=0;i<n;i++){
    printf("%d번째 사람의 나이를 입력해주세요 : ", i+1);
    scanf("%d", age+i);
  }
  for(int i=0;i<n;i++){
    printf("%d번째 사람의 나이 : %d\n", i+1, age[i]);
  }
  
  free(age);
  
  return 0;
}
