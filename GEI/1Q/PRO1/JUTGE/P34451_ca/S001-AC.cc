//Control C201C
//Donat un natural (N) i una sekuencia d'elements (X) indica quants son
//multiples de N
//Entrades: Un nombre naural seguit d'una sekuencia de x enters
//imprimeix: El nombre d'elements multiples de N
#include <iostream>
using namespace std;

int main() {
    int N, X;
    cin >> N;
    //La variable que sumara la cantitat de multiples li dire Multiples
    int Multiples;
    Multiples = 0;
    //Per tots els enters comprova si son multiples
    while (cin >> X) {
        if (X % N == 0) ++Multiples;
    }
    cout << Multiples << endl;
}
