#include <iostream>
#include <vector>
using namespace std;

int main(){
  int n, temp;
  vector<int> v;

  cin >> n;
  for(int i=0; i<n; i++){
    cin >> temp;
    v.push_back(temp);
  }

  int i, from, to;
  cin >> i >> from >> to;

  v.erase(v.begin()+i-1);
  v.erase(v.begin()+from-1, v.begin()+to-1);

  cout << v.size() << endl;
  for(int i=0; i<v.size(); i++){
    cout << v[i] << " ";
  }

  return 0;
}
