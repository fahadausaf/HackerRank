#include <iostream>
#include <cmath>
using namespace std;

int main(){
  cout << "day 2" << endl;

  string tmp;
  double mealCost;
  int tipPercent, taxPercent;

  getline(cin, tmp);
  mealCost = stod(tmp);
  getline(cin, tmp);
  tipPercent = stoi(tmp);
  getline(cin, tmp);
  taxPercent = stoi(tmp);

  double tip = mealCost * tipPercent / 100;
  double tax = mealCost * taxPercent / 100;
  int totalCost = (int) round(mealCost + tip + tax);

  cout << "The total meal cost is " << totalCost << " dollars" <<endl;

  return 0;

}
