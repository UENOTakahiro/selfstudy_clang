#include<cstdio>
#include<cstring>

int main(){
  char str1[100], str2[100], str3[100];

  scanf("%s %s", str1, str2);

  printf("%s (%d)\n", str1, strlen(str1));
  printf("%s (%d)\n", str2, strlen(str2));

  strcat(str1, str2);
  printf("%s\n", str1);

  strcpy(str3, str1);
  if(strcmp(str1, str3) == 0){
    printf("%s = %s\n", str1, str3);
  }

  return 0;
}
