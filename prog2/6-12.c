// STACK 配列での実現
#include <stdio.h>
#include <stdlib.h>

#include "STACKITEM.h"
#include "STACK.h"

STACKItem *S;
int MSP, SP;

void STACKinit(int n){
  MSP=  n;
  S= calloc(MSP, sizeof(STACKItem));
  SP= 0;
}

int STACKcount(){
  return SP;
}

void STACKpush(STACKItem d){
  if( SP==MSP ){
    printf("STACK exhaused.\n"); exit(-1);
  }
  S[SP++]= d;
}

STACKItem STACKpop(){
  if( SP==0 ){
    printf("STACK underflow\n"); exit(-1);
  }
  return S[--SP];
}
