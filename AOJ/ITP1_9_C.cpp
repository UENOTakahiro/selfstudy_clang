#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  string taro = "";
  string hanako = "";

  int taro_score = 0;
  int hanako_score = 0;

  for(int i=0;i<n;i++){
    cin >> taro >> hanako;
    if(taro.compare(hanako) > 0){
      taro_score += 3;
    } else if(taro.compare(hanako) == 0){
      taro_score++;
      hanako_score++;
    } else {
      hanako_score += 3;
    }
  }
  cout << taro_score << " " << hanako_score << endl;
}
