#include <iostream>
#include <vector>
using namespace std;

int main(){
  int n, q;
  cin >> n >> q;

  vector<vector<int>> vv;

  for(int i=0; i<n; i++){
    vector<int> v;
    int k;
    cin >> k;
    for(int j=0; j<k; j++){
      int temp;
      cin >> temp;
      v.push_back(temp);
    }
    vv.push_back(v);
  }

  for(int i=0; i<q; i++){
    int index, k;
    cin >> index >> k;
    cout << vv[index][k] << endl;
  }

  return 0;
}
