// 문제 : 문장에서 특정 문장의 위치를 반환하는 함수를 만들어주세요.(get_index_of_str)

#include <stdio.h>
#define true 1
#define false 0

typedef int bool;

int get_index_of_str(char* str1, char* str2){
  int str1_len = 0;
  for(int i=0;true;i++){
    if(str1[i] == '\0'){
      str1_len = i;
      break;
    }
  }
  
  int str2_len = 0;
  for(int i=0;true;i++){
    if(str2[i] == '\0'){
      str2_len = i;
      break;
    }
  }
  
  if(str2_len > str1_len){
    return -1;
  }

  if(str2_len == 0){
    return -1;
  }

  int compare_cnt = str1_len - str2_len + 1;

  for(int i=0;i<compare_cnt;i++){
    bool match = true;

    for(int j=0;j<str2_len;j++){
      if(str1[i + j] != str2[j]){
        match = false;
        break;
      }
    }
    
    if(match){
      return i;
    }
  }
  return -1;
}

int main(void) {
  int index;
  index = get_index_of_str("abc", "b");
  printf("index : %d\n", index);
  // 출력 => index : 1

  index = get_index_of_str("test", "es");
  printf("index : %d\n", index);
  // 출력 => index : 1

  index = get_index_of_str("abcd", "bd");
  printf("index : %d\n", index);
  // 출력 => index : -1

  index = get_index_of_str("abcd", "cd");
  printf("index : %d\n", index);
  // 출력 => index : 2
  
  index = get_index_of_str("abcd", "a");
  printf("index : %d\n", index);
  // 출력 => index : 0

  index = get_index_of_str("abcd", "ac");
  printf("index : %d\n", index);
  // 출력 => index : -1

  return 0;
}
