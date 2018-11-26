#include <bits/stdc++.h>
using namespace std;

int main(){
  int r, c;
  cin >> r >> c;

  int vec[r+1][c+1];
  for(int i=0;i<r+1;i++){
    for(int j=0;j<c+1;j++){
      vec[i][j] = 0;
    }
  }

  for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
      cin >> vec[i][j];
    }
  }

  //行の集計
  for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
      vec[i][c] += vec[i][j];
    }
  }

  //列の集計
  for(int i=0;i<r;i++){
    for(int j=0;j<c+1;j++){
      vec[r][j] += vec[i][j];
    }
  }

  for(int i=0;i<r+1;i++){
    for(int j=0;j<c+1;j++){
      if(j==c){
        cout << vec[i][j];
      } else {
        cout << vec[i][j] << " ";
      }
    }
    cout << endl;
  }
}
