#include <stdio.h>

int main(void){
  double x, y;

  scanf("%lf %lf", &x, &y);
  printf("和は%f\n", x + y);
  printf("差は%f\n", x - y);
  printf("積は%f\n", x * y);
  printf("商は%f\n", x / y);

  return(0);
}
