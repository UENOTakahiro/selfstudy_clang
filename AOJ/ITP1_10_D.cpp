#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;

  int vec_x[n];
  for(int i=0;i<n;i++){
    vec_x[i] = 0;
  }
  int vec_y[n];
  for(int i=0;i<n;i++){
    vec_y[i] = 0;
  }

  for(int i=0;i<n;i++){
    cin >> vec_x[i];
  }
  for(int i=0;i<n;i++){
    cin >> vec_y[i];
  }

  //debug: vec_x,vec_yの出力
  // for(int i=0;i<n;i++){
  //   cout << vec_x[i] << " ";
  // }
  // cout << endl;
  // for(int i=0;i<n;i++){
  //   cout << vec_y[i] << " ";
  // }
  // cout << endl;

  // p = 1の場合
  double p1 = 0;
  for(int i=0;i<n;i++){
    p1 += fabs(vec_x[i]-vec_y[i]);
  }

  // p = 2の場合
  double p2 = 0;
  double sum2 = 0;
  for(int i=0;i<n;i++){
    sum2 += pow(fabs(vec_x[i]-vec_y[i]), 2);
  }
  p2 = sqrt(sum2);

  // p = 3の場合
  double p3 = 0;
  double sum3 = 0;
  for(int i=0;i<n;i++){
    sum3 += pow(fabs(vec_x[i]-vec_y[i]), 3);
  }
  p3 = pow(sum3, 1.0/3.0);

  // p = infの場合
  double p_inf = 0;
  for(int i=0;i<n;i++){
    if(p_inf<fabs(vec_x[i]-vec_y[i])){
      p_inf = fabs(vec_x[i]-vec_y[i]);
    }
  }

  // 出力
  printf("%.6lf\n", p1);
  printf("%.6lf\n", p2);
  printf("%.6lf\n", p3);
  printf("%.6lf\n", p_inf);

}
