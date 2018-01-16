#include <iostream>
#include <set>
using namespace std;

int main(){
  int n, q, x;
  set<int> s;
  set<int>::iterator itr;
  cin >> n;
  while(n--){
    cin >> q;
    cin >> x;
    if(q==1)
      s.insert(x);
    else if(q==2)
      s.erase(x);
    else if(q==3){
      itr = s.find(x);
      if(x==*itr)
        cout << "Yes" << endl;
      else
        cout << "No" << endl;
    }
  }

  return 0;
}
