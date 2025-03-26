#include <iostream>
using namespace std;

int main() {
    cout.setf(ios::fixed);
    cout.precision(2);
    double M = 0, E = 0, N;
    while (cin >> N) {
        M += N;
        ++E;
    }
    cout << M / E << endl;
}