//Comptant frekuencies
//Llista el nombre de vegadas ke surt kada natural
//Input: Un natural n seguit de n naturals
//Output: Kuantes vegades apareixen els numeros de la sekuencia.
#include <iostream>
#include <vector>
using namespace std;
const int MINNUMBER = 1000000000;
const int TAMANNU = 1001;
/*
 Pre: El vector de totes les posibilitats
 Pos: Totes les posibilitats en una llista
 */
void LlegirSumar(vector<int> &V) {
    int Elements;
    cin >> Elements;
    while (Elements > 0) {
        int X;
        cin >> X;
        ++V[X - MINNUMBER];
        --Elements;
    }
}

void Imprimir(const vector<int> &V) {
    int Pos = 0;
    while (Pos < TAMANNU) {
        if (V[Pos] != 0) cout << Pos + MINNUMBER << " : " << V[Pos] << endl;
        ++Pos;
    }
}

int main() {
    vector<int> Contador(TAMANNU, 0);
    LlegirSumar(Contador);
    Imprimir(Contador);
}
