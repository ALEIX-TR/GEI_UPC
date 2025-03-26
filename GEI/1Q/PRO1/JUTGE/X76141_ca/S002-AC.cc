//Primers n nombres estranys
//Digues els n primers nombres estranys
//Input: Un valor enter
//Output: Tants numeros enters estranys com demani l'input
#include <iostream>
using namespace std;

int main() {
    int quantitatdestranys;
    cin >> quantitatdestranys;

    //Anar comprovant enter per enter si es tracta d'un nombre estrany
    //Acaba quan troba n nombres estranys
    int valorinicial = 1;
    while (quantitatdestranys > 0) {

        //Conta les xifres del valor que s'esta comprovant
        int valor = valorinicial, xifres1 = 0;
        while (valor > 0) {
            valor = valor / 10;
            ++xifres1;
        }

        valor = valorinicial;

        //Suma les xifres elevades a la quantitat total de xifres
        int suma = 0, producte;
        while (valor > 0) {
            producte = 1;
            int xifres2 = xifres1;
            while (xifres2 > 0) {
                producte = producte * (valor % 10);
                --xifres2;
            }
            suma = suma + producte;
            valor = valor / 10;
        }
        
        if (valorinicial == suma) {
            cout << valorinicial << ' ';
            --quantitatdestranys;
        }
        ++valorinicial;
    }
    //cout << endl;
}