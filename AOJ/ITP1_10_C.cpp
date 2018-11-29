#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  n = 1;

  while(n!=0){
    cin >> n;
    int s[n];
    for(int i=0;i<n;i++){
      s[i] = 0;
    }

    for(int i=0;i<n;i++){
      cin >> s[i];
    }

    // // s[n]の出力
    // for(int i=0;i<n;i++){
    //   cout << s[i] << " ";
    // }
    // cout << endl;

    double avg = 0;
    for(int i=0;i<n;i++){
      avg += s[i];
    }
    avg /= n;
    // printf("%.8lf", avg);

    double alpha = 0;
    for(int i=0;i<n;i++){
      alpha += pow(s[i] - avg, 2);
    }
    alpha /= n;
    alpha = sqrt(alpha);

    if(n!=0){
      printf("%.8lf\n", alpha);
    }
  }
}
