#include <stdio.h>

int main(int argc, char *argv[]){
  int i, oven, odd;

  oven = 0;
  odd = 0;

  while(scanf("%d", &i)==1){
    if(i%2==0){
      oven++;
    } else {
      odd++;
    }
  }
  printf("%d\n%d\n", odd, oven);

  return 0;
}
