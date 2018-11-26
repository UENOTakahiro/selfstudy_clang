#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, x;

  while(1){
    int res = 0;
    cin >> n >> x;
    if(n==0 && x==0){
      break;
    }

    for(int i=3;i<=n;i++){
      for(int j=2;j<i;j++){
        for(int k=1;k<j;k++){
          // cout << i << " " << j << " " << k << endl;
          if(i+j+k==x){
            res +=1;
          }
        }
      }
    }
    cout << res << endl;
  }
}
