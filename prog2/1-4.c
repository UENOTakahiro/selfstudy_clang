#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[]){
  int n;
  scanf("%d", &n);

  int isprime[n+1];
  int i = 0;
  for(i=0;i<=n;i++){
    isprime[i] = 1;
  }
  isprime[0] = 0;
  isprime[1] = 0;
  for(i=2;i<=sqrt(n);i++){
    if(isprime[i]){
      int j = i + i;
      while(j<=n){
        isprime[j] = 0;
        j += i;
      }
    }
  }

  if(n < 100){
    for(i=0;i<=n;i++){
      if(isprime[i]==1){
        printf(" %d", i);
      }
    }
    printf("\n");
  } else {
    int counter = 0;
    int last_num = 0;
    for(i=0;i<=n;i++){
      if(isprime[i]==1){
        counter++;
        last_num = i;
      }
    }
    printf("%d\n%d\n", counter, last_num);
  }

  return 0;
}
