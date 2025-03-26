#include <iostream>
using namespace std;

int main() {
    int Nfix, E = 2;
    cin >> Nfix;
    while (E <= 16){
        int N = Nfix, X = 0;
        cout << "Base " << E << ':' << ' ';
        while (N > 0) {
            N = N / E;
            ++X;
        }
        cout << X << " cifras." << endl;
        ++E;
    }
}
