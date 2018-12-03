#include <bits/stdc++.h>
using namespace std;

int eratos(int x){
  int isprime[x+1];
  for(int i=0;i<=x;i++){
    isprime[i] = 1;
  }
  isprime[0] = 0;
  isprime[1] = 0;
  for(int i=2;i<=sqrt(x);i++){
    if(isprime[i]){
      int j = i + i;
      while(j<=x){
        isprime[j] = 0;
        j += i;
      }
    }
  }
  if(isprime[x] == 1){
    return 1;
  } else {
    return 0;
  }
}

int main(){
  int n;
  cin >> n;
  int pnum[n];
  for(int i=0;i<n;i++){
    pnum[i] = 0;
  }

  for(int i=0;i<n;i++){
    cin >> pnum[i];
  }

  int counter = 0;
  for(int i=0;i<n;i++){
    counter += eratos(pnum[i]);
  }

  cout << counter << endl;
}
