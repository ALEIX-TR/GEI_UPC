#include <iostream>
using namespace std;

void SecuenciaDibuixar(int n, char Simbol) {
    if (n != 0){
        cout << Simbol;
        SecuenciaDibuixar(n - 1, Simbol);
    }
}

void Barres(int n) {
    if (n != 0) {
        Barres(n-1);
        Barres(n-1);
        SecuenciaDibuixar(n, '*');
        cout << endl;
    }
}

int main() {
    int N;
    cin >> N;
    Barres(N);
}

