#include <iostream>

using namespace std;

void update(int *a,int *b) {
    int temp1 = *a + *b;
    int temp2 = *a - *b;

    *a = temp1;
    *b = abs(temp2);
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;

    cin >> a;
    cin >> b;

    update(pa, pb);
    cout << a << ", " << b << endl;

    return 0;
}
