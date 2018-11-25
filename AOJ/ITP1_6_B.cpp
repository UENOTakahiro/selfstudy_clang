#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;

  int card[4][13] = {
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1}
  };
  // 絵柄を数字と対応。0:S, 1:H, 2:C, 3:D

  char mark;
  int num;

  for(int i=0;i<n;i++){
    cin >> mark >> num;

    switch(mark){
      case 'S':
        card[0][num-1] = 0;
        break;
      case 'H':
        card[1][num-1] = 0;
        break;
      case 'C':
        card[2][num-1] = 0;
        break;
      case 'D':
        card[3][num-1] = 0;
        break;
    }
  }

  // for(int j=0;j<4;j++){
  //   for(int k=0;k<13;k++){
  //     cout << card[j][k] << " ";
  //   }
  //   cout << endl;
  // }

  for(int j=0;j<4;j++){
    for(int k=0;k<13;k++){
      if(card[j][k] == 1){
        switch(j){
          case 0:
            cout << 'S' << " " << k+1 << endl;
            break;
          case 1:
            cout << 'H' << " " << k+1 << endl;
            break;
          case 2:
            cout << 'C' << " " << k+1 << endl;
            break;
          case 3:
            cout << 'D' << " " << k+1 << endl;
            break;
        }
      }
    }
  }
}
