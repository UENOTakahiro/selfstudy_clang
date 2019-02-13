// 8queens

#include <stdio.h>

int N;
#define LR(x,y) (x-y+N-1)
#define RL(x,y) (x+y)
char board[N][N];
int lr[2*N-1];
int rl[2*N-1];
int h[N];
int count;

void solve(int x){
}

int main(int argc, char *argv[]){
  scanf("%d", &N);
  int x, y;
  for(y= 0; y!=N; y++){
    h[y]= 0;
    for(x= 0; x!=N; x++){
      board[x][y]= '.';
      lr[LR(x,y)]= 0;
      rl[RL(x,y)]= 0;
    }
  }
  count= 0;
  solve(0);
  printf("%d\n", count);

  return 0;
}

void solve(int x){
  int y;
  if( x==N ){
    count++; return;
  }
  for(y= 0; y!=N; y++){
    if( h[y]==0 &&
        lr[LR(x,y)]==0 &&
        rl[RL(x,y)]==0 ){
      h[y]= lr[LR(x,y)]= rl[RL(x,y)]= 1;
      board[x][y]= 'Q';
      solve(x+1);
      board[x][y]= '.';
      h[y]= lr[LR(x,y)]= rl[RL(x,y)]= 0;
    }
  }
}
