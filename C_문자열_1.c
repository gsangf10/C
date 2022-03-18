// 문제 : str1의 값과 str2의 값이 4 차이나는 이유를 자세히 서술해주세요.
// abc 뒤에 null 뜻하는 \0 값이 들어가기 때문에 abc\0 = 총 4바이트 용량을 가진다.
#include <stdio.h>

int main() {
   char* str1 = "abc";
   char* str2 = "abcd";
   char* str3 = "abc";
   
   printf("str1 : %ld\n", (long)str1);
   printf("str2 : %ld\n", (long)str2);
   printf("str3 : %ld\n", (long)str3);

   return 0;
}
