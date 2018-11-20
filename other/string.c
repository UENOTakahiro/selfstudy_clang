#include <stdio.h>
#include <string.h>

int main(void){
  char source[80] = "world";
  char dest[80] = "hello";

  strcat(dest, source);
  printf("文字列:%s\n", dest);
  return 0;
}

// 文字列をコピー
// strcpy(char* str1, const char* str2)

// 文字列をn文字コピー
// strncpy(char* str1, const char* str2, size_t n)

// 文字列の長さを返す
// strlen(const char* str)

// 文字列を連結
// strcat(char* str1, const char* str2)

// 文字列をn文字連結
// strncat(cahr* str1, const char* str2, size_t n)

// 文字列を比較する。等しい場合は0を、違う場合は0以外の数値を返す
// strcmp(const char* str1, const char* str2)
