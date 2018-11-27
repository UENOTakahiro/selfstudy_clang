#include<cstdio>
#include<cstring>

int main(){
  char s1[100], s2[100];

  scanf("%s %s", s1, s2);

  if(strstr(s1, s2) == NULL) printf("No\n");
  else printf("Yes\n");

  return 0;
}
