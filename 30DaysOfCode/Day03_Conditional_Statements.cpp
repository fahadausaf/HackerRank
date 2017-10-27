#include <iostream>
using namespace std;

int main(){
  int n;
  cin >> n;

  if(n%2 !=0) std::cout << "Weird" << '\n';
  else{
    if(n>=2 && n<=5) std::cout << "Not Weird" << '\n';
    else if(n>=6 && n<=20) std::cout << "Weird" << '\n';
    else std::cout << "Not Weird" << '\n';
  }
  return 0;
}
