// 문제 : 구조체를 도입해서 소스코드를 간단하게 바꿔주세요.

#include <stdio.h>

struct Person {
  int age;
  char* name;
  char* hometown;
  char* favorite_food;
};

void introduce(struct Person p) {
  printf("== 소개 시작 ==\n");
  printf("이름 : %s\n", p.name);
  printf("나이 : %d살\n", p.age);
  printf("고향 : %s\n", p.hometown);
  printf("== 소개 끝 ==\n");
}


void talk(struct Person p) {
  printf("이야기 시작 : 안녕하세요. 저는 %d살, %s 입니다. 제 고향인 %s 에서는...\n", p.age, p.name, p.hometown);
}


int main(void) {
  struct Person p1;
  
  p1.age = 20;
  p1.name = "홍길동";
  p1.hometown = "한양";
  p1.favorite_food = "떡볶이";
  
  struct Person p2;

  p2.age = 50;
  p2.name = "임꺽정";
  p2.hometown = "평양";
  p2.favorite_food = "떡국";

  introduce(p1);
  talk(p1);
  introduce(p2);
  talk(p2);

  return 0;
}
