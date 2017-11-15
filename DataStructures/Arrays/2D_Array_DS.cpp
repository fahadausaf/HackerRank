#include<iostream>
#include<vector>

using namespace std;

int main(){

  vector <vector<int>> v(6, vector<int>(6));

  int n;
  for(int i = 0; i < 6; i++){
		for(int j = 0; j < 6; j++){
      cin >> n;
      v[i][j] = n;
    }
  }

  /*
  for(auto x : v)
  {
  	for(auto y : x)
  		cout<<y;
  	cout << endl;
  }
  */

  int max = -999;
  for(int x = 0; x < 4; x++){
		for(int y = 0; y < 4; y++){
      n = v[x][y] + v[x][y+1] + v[x][y+2] +
        v[x+1][y+1] +
        v[x+2][y] + v[x+2][y+1] + v[x+2][y+2];

      if(n>max)
        max = n;
    }
  }

  cout << max << endl;
}
