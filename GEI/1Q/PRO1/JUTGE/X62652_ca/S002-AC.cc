// Sumes de sequencies autodelimitades
// Donades files d'enters no negatius codificats seguint el seguent sistema
// Primer es codifica cada enter en binari i se li dupliquen els digits
// Despres s'ajunten tots els de la fila separats per "01" i acabats en "0101"
// El codi ha de sumar cada una d'aquestes files codificades.
// Input: 0 o mes files formades de 0 i 1.
// Output: La suma dels enters que hi ha codificats a cada fila.

#include <iostream>
using namespace std;

int main() {
    
    char Digit1, Digit2;
    bool PrincipiSekuencia = true;

    while (cin >> Digit1 >> Digit2){

        int Suma = 0;
        while (Digit1 == Digit2 or PrincipiSekuencia){

            int Numero = 0;
            while (Digit1 == Digit2){

                Numero = (Numero * 2) + (int(Digit1) - 48);
                cin >> Digit1 >> Digit2;
            }

            cin >> Digit1 >> Digit2;
            Suma = Suma + Numero;
            PrincipiSekuencia = false;
        }
        
        PrincipiSekuencia = true;
        cout << Suma << endl;
    }

}