// 문제 - str_equals 함수를 구현해주세요.
#include <stdio.h>
#define true 1
#define false 0

typedef int bool;

bool get_str_len(char* str) {
  for ( int i = 0; true; i++ ) {
    if ( str[i] == '\0' ) {
      return i;
    }
  }
}

bool str_equals(char* p1, char* p2){

  bool result = 0;
  int p1_len = get_str_len(p1);
  int p2_len = get_str_len(p2);

  if(p1_len != p2_len){
    return 0;
  } else{
    for(int i=0;i<p1_len;i++){
      if(p1[i] == p2[i]){
        result = 1;
      } else{
        return 0;
      }
    }
  }

  return result;
}

int main(void) {
  char* str1 = "abc";
  char* str2 = "abc";
  char* str3 = "abcd";
  char* str4 = "bbc";
  char str5[] = "abc";

  printf("`%s` is equals to `%s` : %d\n", str1, str1, str_equals(str1, str1));
  // 출력 => `abc` is equals to `abc` : 1

  printf("`%s` is equals to `%s` : %d\n", str1, str2, str_equals(str1, str2));
  // 출력 => `abc` is equals to `abc` : 1

  printf("`%s` is equals to `%s` : %d\n", str1, str3, str_equals(str1, str3));
  // 출력 => `abc` is equals to `abcd` : 0

  printf("`%s` is equals to `%s` : %d\n", str1, str4, str_equals(str1, str4));
  // 출력 => `abc` is equals to `bbc` : 0

  printf("`%s` is equals to `%s` : %d\n", str1, str5, str_equals(str1, str5));
  // 출력 => `abc` is equals to `abc` : 1

  return 0;
}
