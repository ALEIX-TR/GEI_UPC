#include <iostream>
using namespace std;

int main() {
    string PAR;
    bool PRI = false, FIN = false;
    int Paraules = 0;
    while (not FIN and cin >> PAR){
        if (PAR == "principi") PRI = true;
        else if (PAR == "final") FIN = true;
        else if (PRI and not FIN) ++Paraules;
    }
    if (FIN and PRI) cout << Paraules << endl;
    else cout << "sequencia incorrecta" << endl;
}
