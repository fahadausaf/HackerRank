#include<iostream>
#include<vector>
using namespace std;

void ArrayDS(){
  int n;
  cin >> n;

  int arr[n], tmp;
  for(int i=0; i<n; i++){
    cin >> arr[i];
  }

  for(int i=n; i>0; i--){
    cout << arr[i-1];
  }
}

void ArrayDS2D(){
  int n = 6;
  vector<vector<int>> vv;
  for(int i=0; i<n; i++){
    vector<int> v;
    int tmp;
    for(int j=0; j<n; j++){
      cin >> tmp;
      v.push_back(tmp);
    }
    vv.push_back(v);
  }

  cout << endl;
  for(int i=0; i<6; i++){
    for(int j=0; j<6; j++){
      cout << vv[i][j] << " ";
    }
    cout << endl;
  }

  int max = -9999, sum = 0;

  for(int i=0; i<4; i++){
    for(int j=0; j<3; j++){
      sum = vv[i][j] + vv[i][j+1] + vv[i][j+2] +
            vv[i+1][j+1] +
            vv[i+2][j] + vv[i+2][j+1] + vv[i+2][j+2];
      if(sum>max){
        max = sum;
      }
    }
  }
  cout << max;
}

vector<int> array_left_rotation(vector<int> v, int k) {
  int n = v.size();
  k %= n;
  vector<int> vec(n);
  for(int i = 0; i < n; i++) {
      vec[(n+i-k)%n] = v[i];
  }
  return vec;
}

void LeftRotation(){
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
}

int main(){
  //ArrayDS();
  //ArrayDS2D();
  //LeftRotation();
}
