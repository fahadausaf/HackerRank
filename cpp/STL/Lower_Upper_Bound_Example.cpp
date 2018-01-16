#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main ()
{
  std::vector<int> myvector;
  for (int i=1; i<=5; i++) myvector.push_back(i);

  std::cout << "myvector contains:";
  for (std::vector<int>::iterator it = myvector.begin() ; it != myvector.end(); ++it)
    std::cout << ' ' << *it;
  std::cout << '\n';


  int input[] = {1,2,2,3,4,4,5,6,7,8,10,45};
  vector<int> v(input,input+12);

  vector<int>::iterator it1 , it2;

  it1 = lower_bound(v.begin(), v.end(), 4);
  /* points to fifth element in v */

  cout << *it1;

  it2 = lower_bound (v.begin(), v.end(), 10);
  /* points to second last element in v */

  cout << "\n" << *it2;

  return 0;


}
