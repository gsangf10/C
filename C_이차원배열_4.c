// 문제 : 몇명의 사람의 정보를 받을지 입력받고 입력받은 수 만큼 이름과 나이를 입력받은 후 저장해주세요.
// 조건 : malloc을 사용할 수 없습니다.
// 출력예시
/*
사람의 숫자를 입력해주세요. : 3[엔터]
1번째 사람의 이름을 입력해주세요 : aa[엔터]
1번째 사람의 나이를 입력해주세요 : 33[엔터]
2번째 사람의 이름을 입력해주세요 : bb[엔터]
2번째 사람의 나이를 입력해주세요 : 50[엔터]
3번째 사람의 이름을 입력해주세요 : cc[엔터]
3번째 사람의 나이를 입력해주세요 : 42[엔터]
1번째 사람의 이름, 나이 : aa, 33세
2번째 사람의 이름, 나이 : bb, 50세
3번째 사람의 이름, 나이 : cc, 42세
*/

#include <stdio.h>

#pragma warning (disable: 4996)

#define MAX_PEOPLE 100

typedef struct Person{
  char* name;
  // char name[10];
  int age;
} Person;

int main(void) {
  
  Person people[MAX_PEOPLE];
  int n;

  while(1){
    printf("사람의 숫자를 입력해주세요. : ");
    scanf("%d", &n);
    if(n<=MAX_PEOPLE){
      break;
    }
    printf("%d 이하로 입력하세요.", MAX_PEOPLE);
  }

  for(int i=0;i<n;i++){
    printf("%d번째 사람의 이름을 입력해주세요 : ", i+1);
    scanf("%s", &people[i].name);
    printf("%d번째 사람의 나이를 입력해주세요 : ", i+1);
    scanf("%d", &people[i].age);
  }
  for(int i=0;i<n;i++){
    printf("%d번째 사람의 이름, 나이 : %s, %d세\n", i+1, &people[i].name, people[i].age);
  }
  
  return 0;
}
