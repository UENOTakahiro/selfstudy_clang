#include <stdio.h>

int main(int argc, char *argv[]){
  int i, n;

  scanf("%d", &n);

  for(i=0; i<=n; i++){
    printf("%3d %6d\n", i, i*i);
  }
  return 0;
}
