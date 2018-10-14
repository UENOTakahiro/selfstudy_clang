#include <stdio.h>

int main(int argc, char *argv[]){
  int i, n, m;

  scanf("%d %d", &n, &m);
  if(n<=m){
    for(i=n;i<=m;i++){
      printf("%d\n", i);
    }
  }

  return 0;
}
