#include <iostream>
#include <vector>
using namespace std;

int main(){
  vector<vector<int>> vv;
  for(int i=0; i<6; i++){
    vector<int> v;
    for(int j=0; j<6; j++){
      int tmp;
      cin >> tmp;
      v.push_back(tmp);
    }
    vv.push_back(v);
  }
  /*
  cout << endl;
  for(int i=0; i<6; i++){
    for(int j=0; j<6; j++){
      cout << vv[i][j] << " ";
    }
    cout << endl;
  }
  */

  int max = -9999;
  int sum;
  for(int i=0; i<=3; i++){
    for(int j=0; j<=3; j++){
      sum = vv[i][j] + vv[i][j+1] + vv[i][j+2] +
            vv[i+1][j+1] +
            vv[i+2][j] + vv[i+2][j+1] + vv[i+2][j+2];
      if(sum>max){
        max = sum;
      }
      //cout << "sum: " << sum << ", max: " << max << endl;
    }

  }

  cout << max;

  return 0;
}
