#include <stdio.h>

int main(int argc, char *argv[]){
  int i, max, min, sum, d;
  float avg;

  i = 0;
  sum = 0;
  min = 100000000;
  max = -100000000;
  for(; scanf("%d", &d)==1;){
    sum += d;
    i++;
    if(min > d){
      min = d;
    }
    if(max < d){
      max = d;
    }
  }

  avg = (double)sum/i;
  printf("%d\n%.2f\n%d\n", max, avg, min);
  return 0;
}
