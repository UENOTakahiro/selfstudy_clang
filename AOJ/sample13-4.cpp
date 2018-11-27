#include<cstdio>
#include<cctype>

int main(){
  char city[20] = "Aizu-Wakamatsu";

  printf("%c\n", city[1]);

  int i=0;
  while(city[i]){
    printf("%c", toupper(city[i]));
    i++;
  }
  printf("\n");

  city[2] = 'd';
  city[4] = '\0';

  printf("%s\n", city);

  return 0;
}
