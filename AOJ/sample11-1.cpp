#include<iostream>
using namespace std;

int main(){
  for(int i=1; i<=9; i++){
    for(int j=1; j<=9;j++){
      int val = i*j;
      if(val < 10)
        cout << " ";
      cout << val << " "
    }
    cout << endl;
  }
  return 0;
}