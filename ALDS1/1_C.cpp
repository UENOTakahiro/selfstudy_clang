#include <bits/stdc++.h>
using namespace std;

bool isprime(int x){
  if(x == 2){
    return true;
  }
  if(x < 2 || x%2==0){
    return false;
  }
  for(int i=3;i<=sqrt(x);i+=2){
    if(x%i==0){
      return false;
    }
  }
  return true;
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
    if(isprime(pnum[i])==true){
      counter++;
    }
  }
  cout << counter << endl;
}
