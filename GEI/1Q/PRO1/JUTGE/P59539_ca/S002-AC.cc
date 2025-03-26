//Nombres harmònics
//Donat un natural calcula el seu nombre harmonic com Hn= 1/1 + 1/2 + ... + 1/n
//Input: Un natural
//Output: El seu nombre harmonic
#include <iostream>
using namespace std;

int main() {

    int Natural;
    cin >> Natural;
    double Harmonic = 0;

    //Hn= 1/1 + 1/2 + ... + 1/n
    while (Natural > 0) {
        Harmonic = Harmonic + 1/double(Natural);
        --Natural;
    }
    //imprimeix el seu nombre harmonic amb quatre xifres decimal
    cout.setf(ios::fixed);
    cout.precision(4);
    cout << Harmonic << endl;
}
