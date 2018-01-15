#include <iostream>
#include <string.h>
using namespace std;

int main() {
  // assigning value to string s
  string s = "20;0,1,10,3,2,4,5,7,6,8,11,9,15,12,13,4,16,18,17,14";

  int n = s.length();

  // declaring character array
  char char_array[n+1];

  // copying the contents of the
  // string to char array
  strcpy(char_array, s.c_str());

  int size = char_array[0] - '0';
  //cout << size << endl;

  size = size * 2;

  for (int i=4; i<=size; i++){
    char tmp = char_array[i];
    //cout << char_array[i];
    for(int z=2; z<=size; z++){
      if(char_array[i] == char_array[z])
      {
        cout << tmp << endl;
      }
    }
    i++;
  }
}
