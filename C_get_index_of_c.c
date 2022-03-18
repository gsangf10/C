// 문제 : 문장에서 특정 문자의 위치를 반환하는 함수를 만들어주세요.(get_index_of_c)

#include <stdio.h>

int get_index_of_c(char* p, char c){

  int result = 0, i = 0;

  for(;p[i]!='\0';i++){
    if(p[i] == c){
      break;
    }
    result++;
  }
  
  if(p[i] == '\0'){
    result = -1;
  }

  return result;
}

int main(void) {
  int index;
  
  index = get_index_of_c("abc", 'b');
  printf("index : %d\n", index);
  // 출력 => index : 1

  index = get_index_of_c("test", 's');
  printf("index : %d\n", index);
  // 출력 => index : 2

  index = get_index_of_c("test", 'x');
  printf("index : %d\n", index);
  // 출력 => index : -1

  return 0;
}
