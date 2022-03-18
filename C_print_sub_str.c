// 문제 : 문장에서 특정 부분만 잘라서 출력하는 함수를 만들어주세요.(print_sub_str)

#include <stdio.h>

int print_sub_str(char* p, int start_n, int finish_n){

  char return_s;

  for(int i=start_n;i<start_n+finish_n;i++){
    printf("%c", p[i]);
  }
  
  printf("\n");

  return 0;
}

int main(void) {
  print_sub_str("abcd", 2, 2);
  // 출력 => cd

  print_sub_str("abcd", 1, 3);
  // 출력 => bcd

  print_sub_str("abcd", 1, 10);
  // 출력 => bcd

  print_sub_str("abcd", 0, 2);
  // 출력 => ab

  return 0;
}
