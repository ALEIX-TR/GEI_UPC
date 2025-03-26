#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    bool NoTrobat = true;
    int XCartesConsekutives = 1;
    char Carta, Anterior = ' ';
    while (NoTrobat and cin >> Carta){
        if (Carta == Anterior) ++XCartesConsekutives;
        else XCartesConsekutives = 1;
        if (XCartesConsekutives == N) NoTrobat = false;
        Anterior = Carta;
    }
    if (NoTrobat) cout << "No hi ha " << N << "-Poker" << endl;
    else cout << N << "-Poker de " << Anterior << '!' << endl;
}
