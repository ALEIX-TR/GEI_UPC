#include <iostream>
using namespace std;

void Dibuixar(int n, char Simbol) {
    if (n != 0){
        cout << Simbol;
        Dibuixar(n - 1, Simbol);
    }
}

void Barres(int n) {
    if (n != 0) {
        Barres(n-1);
        Dibuixar(n, '*');
        cout << endl;
        Barres(n-1);
    }
}

int main() {
    int N;
    cin >> N;
    Barres(N);
}
