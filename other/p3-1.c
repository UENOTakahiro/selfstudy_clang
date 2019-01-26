#include <stdio.h>
#include <stdlib.h>

void show(int value);

int main(int argc, char *argv[]){
  if(argc == 1) return 0;
  show(atoi(argv[1])); printf("\n");

  return 0;
}

void printDigit(int d);

void show(int value){
  if( value/10 != 0) show(value/10);
  printDigit(value % 10);
}

void printDigit(int d){
  putchar(d+'0');
}
