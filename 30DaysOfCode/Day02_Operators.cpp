#include <iostream>
#include <cmath>
using namespace std;

int main(){
  double mealCost;
  int tipPercent, taxPercent;

  cin >> mealCost;
  cin >> tipPercent;
  cin >> taxPercent;

  double tip = mealCost * tipPercent / 100;
  double tax = mealCost * taxPercent / 100;
  int totalCost = (int) round(mealCost + tip + tax);

  cout << "The total meal cost is " << totalCost << " dollars." <<endl;

  return 0;
}
