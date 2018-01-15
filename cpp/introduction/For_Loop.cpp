#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int a;
    int b;
    cin >> a;
    cin >> b;

    for (int x = a; x <= b; x++){
        if(x==1) cout << "one" << endl;
        if(x==2) cout << "two" << endl;
        if(x==3) cout << "three" << endl;
        if(x==4) cout << "four" << endl;
        if(x==5) cout << "five" << endl;
        if(x==6) cout << "six" << endl;
        if(x==7) cout << "seven" << endl;
        if(x==8) cout << "eight" << endl;
        if(x==9) cout << "nine" << endl;
        if(x>9){
            if(x%2==0) cout << "even" << endl;
            else cout << "odd" << endl;
        }
    }
    return 0;
}
