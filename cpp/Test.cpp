#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>
using namespace std;

void inputAndInput(){
  int a, b, c;
  cin >> a;
  cin >> b;
  cin >> c;

  cout << a+b+c << endl;
}

void basicDataType(){
  int a;
  long b;
  char c;
  float d;
  double e;
  scanf("%d %ld %c %f %lf", &a, &b, &c, &d, &e);
  printf("%d\n%ld\n%c\n%f\n%lf", a, b, c, d, e);
}

void conditionalStatements(){
  int n;
  cin >> n;
  switch (n) {
    case(1): cout << "one" << endl; break;
    case(2): cout << "two" << endl; break;
    case(3): cout << "three" << endl; break;
    case(4): cout << "four" << endl; break;
    case(5): cout << "five" << endl; break;
    case(6): cout << "six" << endl; break;
    case(7): cout << "seven" << endl; break;
    case(8): cout << "eight" << endl; break;
    case(9): cout << "nine" << endl; break;
    default: cout << "Greater than 9" << endl; break;
  }
}

void forLoop(){
  int a, b;
  cin >> a;
  cin >> b;

  for(int i=a; i<=b; i++){
    switch (i){
      case(1): cout << "one\n"; break;
      case(2): cout << "two\n"; break;
      case(3): cout << "three\n"; break;
      case(4): cout << "four\n"; break;
      case(5): cout << "five\n"; break;
      case(6): cout << "six\n"; break;
      case(7): cout << "seven\n"; break;
      case(8): cout << "eight\n"; break;
      case(9): cout << "nine\n"; break;
      default: {
        if(i%2==0)
          cout << "even\n";
        else
          cout << "odd\n";
      }
    }
  }
}

void arrayIntroduction(){
  int n;
  cin >> n;
  int arr[n];

  for(int i=0; i<n; i++){
    cin >> arr[i];
  }
  for(int i=n; i>0; i--){
    cout << arr[i-1] << " ";
  }
}

void variableSizedArrays(){
  int n, q;
  cin >> n >> q;

  vector<vector<int>> vv;

  for(int i=0; i<n; i++){
    vector<int> v;
    int k, temp;
    cin >> k;
    for(int j=0; j<k; j++){
      cin >> temp;
      v.push_back(temp);
    }
    vv.push_back(v);
  }

  for(int j=0; j<q; j++){
    int i, k;
    cin >> i >> k;
    cout << vv[i][k] << endl;
  }

  //print 2D vector
  /*
  for(int i=0; i<vv.size(); i++){
    for(int j=0; j<vv[i].size(); j++){
      cout << vv[i][j];
    }
  }
  */
}

vector<int> parseInts(string str) {
  stringstream ss(str);
  vector<int> v;
  char c;
  int i;

  while(ss >> i){
    v.push_back(i);
    ss >> c;
  }

  return v;
}

void stringStream(){
  string s;
  cin >> s;

  vector<int> v = parseInts(s);
  for(int i=0; i<v.size(); i++){
    cout << v[i] << endl;
  }
}

void vectorSort(){
  int n = 0;
  cin >> n;
  vector<int> v;
  int temp;

  for(int i=0; i<n; i++){
    cin >> temp;
    v.push_back(temp);
  }

  sort(v.begin(), v.end());

  for(int i=0; i<n; i++){
    cout << v[i] << " ";
  }
}

void vectorErase(){
  vector<int> v;
  int n, x, a, b;
  cin >> n;
  int temp;
  for(int i=0; i<n; i++){
    cin >> temp;
    v.push_back(temp);
  }

  cin >> x >> a >> b;
  v.erase(v.begin()+x-1);

  v.erase(v.begin()+a-1, v.begin()+b-1);

  cout << v.size() << endl;
  for(int i=0; i<v.size(); i++){
    cout << v[i] << " ";
  }
}

void lowerBound(){
  int n;
  cin >> n;
  vector<int> v;
  for(int i=0; i<n; i++){
    int tmp;
    cin >> tmp;
    v.push_back(tmp);
  }

  cin >> n;
  while (n--) {
    int x;
    cin >> x;
    int index = lower_bound (v.begin(), v.end(), x) - v.begin();
    cout << index;

    if (v[index] == x)
      cout << "Yes ";
    else
      cout << "No ";

    cout << index + 1 << endl;
  }
}

int main(){
  cout << "Hacker Rank\n-----------" << endl;

  //inputAndInput();
  //basicDataType();
  //conditionalStatements();
  //forLoop();
  //arrayIntroduction();
  //variableSizedArrays();
  //stringStream();
  //vectorSort();
  //vectorErase();
  lowerBound();

  return 0;
}
