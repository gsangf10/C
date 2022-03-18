// 문제 : 문장에서 특정 문장의 위치를 반환하는 함수를 만들어주세요.(get_index_of_str)

#include <stdio.h>

typedef int bool;

#define true 1
#define false 0

int get_str_len(char* str) {
  for ( int i = 0; true; i++ ) {
    if ( str[i] == '\0' ) {
      return i;
    }
  }
}

bool starts_with(char* str, char* str2) {
  int str_len = get_str_len(str);
  int str2_len = get_str_len(str2);

  if ( str_len < str2_len ) {
    return false;
  }

  for ( int i = 0; i < str2_len; i++ ) {
    if ( str[i] != str2[i] ) {
      return false;
    }
  }

  return true;
}

int get_index_of_str(char* str, char* keyword) {
  int str_len = get_str_len(str);
  int keyword_len = get_str_len(keyword);

  // 택도 없는 사항은 입구컷
  if ( keyword_len > str_len ) { return -1; }
  
  // 문장끼리 비교해야하는 횟수
  int compare_count = str_len - keyword_len + 1;

  // str + 0과 str + 1, str + 2는 서로 다른 문장이다.
  for ( int i = 0; i < compare_count; i++ ) {
    if ( starts_with(str + i, keyword) ) {
      return i;
    }
  }

  return -1;
}

int main(void) {
  int index;

  index = get_index_of_str("abcdefg", "def");
  printf("== get_index_of_str(%s, %s) ==\n", "abcdefg", "def");
  printf("index : %d\n", index);
  // 출력 => index : 3
  
  index = get_index_of_str("abc", "b");
  printf("== get_index_of_str(%s, %s) ==\n", "abc", "b");
  printf("index : %d\n", index);
  // 출력 => index : 1

  index = get_index_of_str("test", "es");
  printf("== get_index_of_str(%s, %s) ==\n", "test", "es");
  printf("index : %d\n", index);
  // 출력 => index : 1

  index = get_index_of_str("abcd", "bd");
  printf("== get_index_of_str(%s, %s) ==\n", "abcd", "bd");
  printf("index : %d\n", index);
  // 출력 => index : -1

  return 0;
}
