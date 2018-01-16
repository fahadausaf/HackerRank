#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main(){
  int n, r;
  cin >> n >> r;

  vector<int> v;
  for(int i=0; i<n; i++){
    int tmp;
    cin >> tmp;
    v.push_back(tmp);
  }

  if(r>n){
    r = abs(n-r);
  }

  while(r--){
    int tmp = v.front();
    v.erase(v.begin());
    v.push_back(tmp);
  }

  for(int i=0; i<n; i++){
    cout << v[i] << " ";
  }
  return 0;
}
