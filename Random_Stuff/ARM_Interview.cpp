/*
Programming Challenge Description:
Imagine we have an immutable array of size N which we know to be filled with
integers ranging from 0 to N-2, inclusive. Suppose we know that the array
contains exactly one duplicated entry and that duplicate appears exactly twice.
Find the duplicated entry.

Input:
Your program should read lines of text from standard input. Each line begins
with a positive integer N, the size of the array, followed by a semicolon,
followed by a comma separated list of positive numbers ranging from 0 to N-2,
inclusive.

Output:
For each line of input, print to standard output the duplicated entry, each on
its own line.
*/

#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

int main(){
  string str;
  cin << str;
  stringstream ss(str);
  int n,x;
  ss >> n;
  char ch;
  vector<int> v;
  for (int i=0; i<n; i++) {
    ss >> ch;
    ss >> x;
    v.push_back(x);
  }

  for(int x=0; x<n; x++){
    for(int y=x+1; y<n; y++){
      if(v[x]==v[y]){
        cout << x;
        break;
      }
    }
  }

  return 0;
}
