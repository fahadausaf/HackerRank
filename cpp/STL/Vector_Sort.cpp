#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
  int n;
  vector<int> v;
  cin >> n;

  int temp;
  for(int i=0; i<n; i++){
    cin >> temp;
    v.push_back(temp);
  }

  sort(v.begin(), v.end());

  for(int i=0; i<n; i++){
    cout << v[i] << " ";
  }

  return 0;
}
