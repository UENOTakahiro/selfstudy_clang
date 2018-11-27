#include <bits/stdc++.h>
using namespace std;

int main(){
  char p1[100] = "a";
  scanf("%s", p1);
  char s1[100] = "b";
  scanf("%s", s1);
  char p2[200] = "c";
  strcpy(p2, p1);
  strcat(p2, p1);

  // printf("%s", p2);

  if(strstr(p2, s1) == NULL){
    cout << "No" << endl;
  } else {
    cout << "Yes" << endl;
  }
}
