// 문제 - ends_with 함수를 구현해주세요.
#include <stdio.h>

typedef int bool;

#define true 1
#define false 0

bool ends_with(char* p1, char* p2){

  bool result = 0;
  int p1_cnt = 0;
  int p2_cnt = 0;

  for(int i=0;p1[i]!='\0';i++){
    p1_cnt++;
  }
  for(int i=0;p2[i]!='\0';i++){
    p2_cnt++;
  }

  for(int k=p2_cnt;k>=0;k--){
    if(p1[p1_cnt] == p2[k]){
      result = 1;
    } else{
      result = 0;
      break;
    }
    p1_cnt--;
  }

  return result;
}

int main(void) {
  
  bool rs;
  
  rs = ends_with("abc", "bc");
  printf("rs : %d\n", rs); // 출력 rs : 1

  rs = ends_with("kbs", "kb");
  printf("rs : %d\n", rs); // 출력 rs : 0

  rs = ends_with("kbs", "bs");
  printf("rs : %d\n", rs); // 출력 rs : 1

  rs = ends_with("mbc", "mc");
  printf("rs : %d\n", rs); // 출력 rs : 0

  return 0;
}
