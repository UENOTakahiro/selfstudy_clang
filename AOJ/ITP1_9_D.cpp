#include <bits/stdc++.h>
using namespace std;

int main(){
  string str;
  cin >> str;
  int q;
  cin >> q;

  string command = "";
  int a, b;
  string p = "";
  for(int i=0;i<q;i++){
    cin >> command;
    if(command == "replace"){
      cin >> a >> b >> p;
      str = str.replace(a, b-a+1, p);
    } else if(command == "reverse"){
      cin >> a >> b;
      string sub_str = str.substr(a, b-a+1);
      string sub_str_reverse = "";
      for(int k=sub_str.size()-1;k>=0;k--){
        sub_str_reverse += sub_str[k];
      }
      str = str.replace(a, b-a+1, sub_str_reverse);
    } else if(command == "print"){
      cin >> a >> b;
      for(int j=a;j<b+1;j++){
        cout << str[j];
      }
      cout << endl;
    }
  }
}
