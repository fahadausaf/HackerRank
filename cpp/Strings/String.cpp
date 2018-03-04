#include<iostream>
#include<string.h>
using namespace std;

int main(){
  string str1, str2;
  cin >> str1 >> str2;

  int n1 = str1.size();
  int n2 = str2.size();
  char c1[n1+1];
  char c2[n2+1];
  strcpy(c1, str1.c_str());
  strcpy(c2, str2.c_str());
  char tmp = c1[0];
  c1[0] = c2[0];
  c2[0] = tmp;

  cout << n1 << " " << n2 << endl;
  cout << str1+str2 << endl;
  cout << c1 << " " << c2;

  /*
  This is a sample change
  */

  return 0;
}
