#include <iostream>
#include <iomanip>
using namespace std;

int main(){
  int i = 4;
  double d = 4.0;
  string s = "HackerRank ";

  int i2;
  double d2;
  string s2;

  cin >> i2;
  cin >> d2;
  cin.ignore();
  getline(cin, s2);

  cout << i + i2 << "\n" << fixed << setprecision(1) << d + d2 << "\n" << s + s2 << endl;

  return 0;
}
