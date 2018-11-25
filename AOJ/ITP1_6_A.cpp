#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  int vec[n];
  for(int i=0;i<n;i++){
    cin >> vec[i];
  }

  for(int j=n-1;j>=0;j--){
    if(j==0){
      cout << vec[j] << endl;
    } else {
      cout << vec[j] << " ";
    }
  }
}
