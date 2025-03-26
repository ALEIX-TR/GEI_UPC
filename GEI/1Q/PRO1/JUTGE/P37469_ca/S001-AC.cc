//Descomposició horaria
//Pasar n segons a Hores, Minuts, Segons
#include <iostream>
using namespace std;
int main() {
    //Agafa el nombre de segons que es un nombre natural
    int S;
    cin >> S;
    //Extreu les hores i minuts que hi ha en els segons donats i imprimeixlos
    cout << S/3600 << ' ' << (S%3600)/60 << ' ' << ((S%3600)%60) << endl;
}
