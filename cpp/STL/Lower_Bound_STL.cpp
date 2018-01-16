#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/*
int main(){
  int n;
  cin >> n;
  vector<int> v;
  for(int i=0; i<n; i++){
    int tmp;
    cin >> tmp;
    v.push_back(tmp);
  }

  int index = lower_bound(v.begin(), v.end(), 3) - v.begin();
  cout << index << endl;
  index = upper_bound(v.begin(), v.end(), 3) - v.begin();
  cout << index << endl;


  //cin >> n;
  //for(int i=0; i<n; i++){
  //}


  return 0;
}
*/

/*
int main2() {
    int n;
    vector<int> data;
    cin >> n;
    while (n--) {
        int x;
        cin >> x;
        data.push_back(x);
    }

    cin >> n;
    while (n--) {
        int x;
        cin >> x;
        int index = lower_bound (data.begin(), data.end(), x) - data.begin();
        if (data[index] == x)
            cout << "Yes ";
        else
            cout << "No ";

        cout << index + 1 << endl;
    }
    return 0;
}
*/
