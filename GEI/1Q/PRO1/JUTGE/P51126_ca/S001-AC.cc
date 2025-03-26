#include <iostream>
using namespace std;

int main() {
    int a1, b1, a2, b2;
    cin >> a1 >> b1 >> a2 >> b2;

    int a3;
    if (a1 <= a2) a3 = a2;
    else a3 = a1;

    int b3;
    if (b1 <= b2) b3 = b1;
    else b3 = b2;

    if (a3 <= b3) cout << '[' << a3 << ',' << b3 << ']' << endl;
    else cout << "[]" << endl;
}