#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

vector<int> array_left_rotation(vector<int> v, int k) {
  int n = v.size();
  k %= n;
  vector<int> vec(n);
  for(int i = 0; i < n; i++) {
      vec[(n+i-k)%n] = v[i];
  }
  return vec;
}

vector<int> array_left_rotation2(vector<int> v, int k) {
  int n = v.size();

  for(int i=0; i<k; i++){
    int temp = v[0];
    for(int j=0; j<n-1; j++)
      v[j] = v[j+1];
    v[n-1] = temp;
  }
  return v;
}

int main(){
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for(int i = 0;i < n;i++){
        cin >> v[i];
    }
    vector<int> output = array_left_rotation(v, k);
    for(int i = 0; i < n;i++)
        cout << output[i] << " ";
    cout << endl;
    return 0;
}
