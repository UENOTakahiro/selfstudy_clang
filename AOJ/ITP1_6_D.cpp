#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, m;
  cin >> n >> m;

  int vec_a[n][m];
  int vec_b[m];

  // vec_a[]への入力
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      cin >> vec_a[i][j];
    }
  }

  // debug: vec_a[]の出力
  // for(int i=0;i<n;i++){
  //   for(int j=0;j<m;j++){
  //     cout << vec_a[i][j] << " ";
  //   }
  //   cout << endl;
  // }


  // vec_b[]への入力
  for(int i=0;i<m;i++){
    cin >> vec_b[i];
  }

  // debug: vec_b[]の出力
  // for(int i=0;i<m;i++){
  //   cout << vec_b[i] << endl;
  // }


  // vec_c[]へ代入
  int vec_c[n];
  // vec_c[]を初期化
  for(int i=0;i<n;i++){
    vec_c[i] = 0;
  }

  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      vec_c[i] += vec_a[i][j] * vec_b[j];
    }
  }

  // vec_c[]を出力
  for(int i=0;i<n;i++){
    cout << vec_c[i] << endl;
  }
}
