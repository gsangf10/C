// 문제 - starts_with 함수를 구현해주세요.
#include <stdio.h>

typedef int bool;

#define true 1
#define false 0

bool starts_with(char* p1, char* p2){

  bool result = 0;

  for(int i=0;p2[i]!='\0';i++){
    if(p1[i] == p2[i]){
      result = 1;
    } else{
      result = 0;
      break;
    }
  }

  return result;
}

int main(void) {
  
  bool rs;
  
  rs = starts_with("abc", "ab");
  printf("rs : %d\n", rs); // 출력 rs : 1

  rs = starts_with("kbs", "kb");
  printf("rs : %d\n", rs); // 출력 rs : 1

  rs = starts_with("mbc", "mc");
  printf("rs : %d\n", rs); // 출력 rs : 0

  return 0;
}
