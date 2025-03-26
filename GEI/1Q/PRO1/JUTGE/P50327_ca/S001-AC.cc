#include <iostream>
using namespace std;

int main() {
    int Nfix;
    cin >> Nfix;
    if (Nfix != 0) {
    while (Nfix > 0) {
        cout << Nfix % 10;
        Nfix /= 10;
    }
    }else cout << Nfix;
    cout << endl;
}
