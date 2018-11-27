#include <bits/stdc++.h>
using namespace std;

int main(){
  char res[1001] = "0";

  while(1){
    int sum = 0;

    scanf("%s", res);
    if(res[0] == '0'){
      break;
    }

    int i=0;
    while(res[i]){
      sum += res[i] - '0';
      i++;
    }

    cout << sum << endl;
  }

  return 0;
}
