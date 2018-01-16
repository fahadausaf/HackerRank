#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
  int n;
  cin >> n;
  vector<int> v;
  for(int i=0; i<n; i++){
    int tmp;
    cin >> tmp;
    v.push_back(tmp);
  }

  cin >> n;
  while (n--) {
    int x;
    cin >> x;
    int index = lower_bound (v.begin(), v.end(), x) - v.begin();
    if (v[index] == x)
      cout << "Yes ";
    else
      cout << "No ";

    cout << index + 1 << endl;
  }

  return 0;
}
