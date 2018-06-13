#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
  int n;
  cin >> n;
  vector<int> v = {64630, 11735,14216,99233,14470,4978,73429,38120,51135,67060};

  float mean = 0.0,
    median = 0.0,
    mode = 0.0;

  /*
  int cur;
  for(int i=0; i<n; i++){
    cin >> cur;
    v.push_back(cur);
  }
  */

  //calculating mean
  for(int i=0; i<n; i++){
    mean = mean + v[i];
  }
  mean = mean/n;
  cout << mean << "\n";

  //calculate median
  std::sort(v.begin(), v.end());

  int med = n/2;
  if(n%2 == 0)
    median = (v[med-1] + v[med]) / 2.0;
  else
    median = v[med];

  cout << median << "\n";

  //for (vector<int>::iterator it=v.begin(); it!=v.end(); ++it)
  //  cout << ' ' << *it;

  return 0;
}
