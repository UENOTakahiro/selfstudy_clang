#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;

  // END_CHECK_NUM
  for(int i=1;i<=N;i++){
    int x = i;
    // CHECK_NUM
    if(x%3 == 0){
      cout << " " << i;
    } else {
      // INCLUDE3
      for(int j=x;j>0;j/=10){
        if(j%10==3){
          cout << " " << i;
          break;
        }
      }
    }
  }
  cout << endl;
}
