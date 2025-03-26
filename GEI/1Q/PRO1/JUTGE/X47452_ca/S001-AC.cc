//Numeros estrany
//Donat un numero si al sumar totes les seves xifres
//elevades a la cantitat de xifres totals es igual al numero inicial,
//direm que es tracte de un numero extrany.
//Input: Un numero natural entre 0 i 10000 sense inclourels.
//Output: El numero indicant si es estrany o no.

#include <iostream>
using namespace std;

int main() {
    int Natural;
    cin >> Natural;
    
    int Xifra1, Xifra2, Xifra3, Xifra4;
    Xifra1 = Natural % 10;
    Xifra2 = (Natural / 10) % 10;
    Xifra3 = (Natural / 100) % 10;
    Xifra4 = Natural / 1000;

    //Trobar el nombre de xifres i fer la suma d'elevats
    int Suma;
    if (Xifra4 == 0) {
        if (Xifra3 == 0) {
            if (Xifra2 == 0) {
                Suma = Xifra1;
            }else {
                Suma = Xifra2 * Xifra2 + Xifra1 * Xifra1;
            }
        }else {
            Suma = Xifra3 * Xifra3 * Xifra3 + Xifra2 * Xifra2 * Xifra2 +
            Xifra1 * Xifra1 * Xifra1;
        }
    }else {
        Suma = Xifra4 * Xifra4 * Xifra4 * Xifra4 +
        Xifra3 * Xifra3 * Xifra3 * Xifra3 +
        Xifra2 * Xifra2 * Xifra2 * Xifra2 +
        Xifra1 * Xifra1 * Xifra1 * Xifra1;
    }
    //Comprova si es igual al numero inicial
    if (Suma == Natural) cout << "strange number: " << Natural << endl;
    else cout << "not strange number: " << Natural << endl;
}