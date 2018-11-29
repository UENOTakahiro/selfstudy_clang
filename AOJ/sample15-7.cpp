#include<iostream>
#include<string>
using namespace std;

struct Student{
  string name;
  int id, age;
  string e_mail;
  double GPA;
};

void printStudent(Student st){
  cout << st.name << " " << st.GPA << endl;
}

int main(){
  int n;
  Student S[1000];

  cin >> n;
  for(int i=0;i<n;i++){
    cin >> S[i].name >> S[i].id;
    cin >> S[i].age >> S[i].e_mail >> S[i].GPA;
  }

  for(int i=0;i<n;i++){
    printStudent(S[i]);
  }

  return 0;
}
