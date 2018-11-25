#include<iostream>
using namespace std;

int main(){
  int month[5][7];

  for(int i=0;i<5;i++){
    for(int j=0;j<7;j++){
      month[i][j] = (i == 2 || j >=5) ? 0 : 1;
    }
  }

  for(int i=0;i<5;i++){
    for(int j=0;j<7;j++){
      cout << " " << month[i][j];
    }
    cout << endl;
  }

  return 0;
}
