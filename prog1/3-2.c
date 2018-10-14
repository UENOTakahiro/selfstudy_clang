#include <stdio.h>

int main(int argc, char *argv[]){
  long int i, n, m, res;

  res = 10000000000;
  scanf("%ld", &n);
  for(i=0; i<n ;i++){
    scanf("%ld", &m);
    if(m<res){
      res = m;
    }
  }

  printf("%ld\n", res);

  return 0;
}
