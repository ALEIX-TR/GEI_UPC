// Almenys 5 Nombres ABCA
// Donat un llistat de numeros naturals busca si
//hi ha cinc enters de quatre digits amb el primer digit igual al ultim.
// Input: Una llista de n numeros naturals.
// Output:"SI" o "NO" depenent de si compleix la condicio.

#include <iostream>
using namespace std;

int main() {
    int Natural, Compleixen = 0;
    
    while (cin >> Natural) {

        if (Natural % 10 == Natural / 1000 and Natural % 10 != 0){
            ++Compleixen;
        }
    }

    if (Compleixen < 5) cout << "NO";
    else cout << "SI";
    //endl;?
}
