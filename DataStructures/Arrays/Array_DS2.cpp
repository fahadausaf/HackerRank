#include <iostream>
#include <vector>
using namespace std;

int main(){
  int n;
  cin >> n;

  vector<int> v;
  int tmp;
  while(n--){
    cin >> tmp;
    v.push_back(tmp);
  }
  for(int i=v.size(); i>0; i--)
    cout << v[i-1] << " ";
}
