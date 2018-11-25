#include <iostream>
using namespace std;

int main(){
  int day[7] = {3, 4, 2, 1, 8, 2, 0};
  int sum = 0;
  for(int i=0; i<7; i++){
    cout << day[i] << " ";
    sum += day[i];
  }
  cout << "\n" << sum << endl;
}
