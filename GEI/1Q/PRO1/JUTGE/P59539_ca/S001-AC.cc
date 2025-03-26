//Nombres harmònics
//Fes el sumatori n vegades dels valors 1 / n
#include <iostream>
using namespace std;

int main() {
    //Entrada: Un nombre natural
    int N;
    cin >> N;
    //la variable on es sumaran tots els valors
    double S;
    S = 0;
    //Repetir n vegades amb un while
    while (N > 0) {
        S = S + 1.000/N;
        --N;
    }
    //imprimeix: el seu nombre harmonic amb quatre xifres decimal
    cout.setf(ios::fixed);
    cout.precision(4);
    cout << S << endl;
}
