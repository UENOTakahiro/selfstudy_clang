#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, m, l;
  cin >> n >> m >> l;

  int vec_a[n][m];
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      cin >> vec_a[i][j];
    }
  }

  int vec_b[m][l];
  for(int i=0;i<m;i++){
    for(int j=0;j<l;j++){
      cin >> vec_b[i][j];
    }
  }

  // 行列Cを宣言、初期化
  long long vec_c[n][l];
  for(int i=0;i<n;i++){
    for(int j=0;j<l;j++){
      vec_c[i][j] = 0;
    }
  }

  // 行列Cへ代入
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      for(int k=0;k<l;k++){
        vec_c[i][k] += vec_a[i][j] * vec_b[j][k];
      }
    }
  }

  // 行列Cを出力
  for(int i=0;i<n;i++){
    for(int j=0;j<l;j++){
      if(j==l-1){
        cout << vec_c[i][j];
      } else {
        cout << vec_c[i][j] << " ";
      }
    }
    cout << endl;
  }
}
