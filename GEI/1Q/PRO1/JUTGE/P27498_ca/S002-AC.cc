#include <iostream>
#include <vector>
using namespace std;

void YegeixMatriu(vector<vector<int> > &M) {
    int Files = M.size(), Kolumnes = M[0].size(), fila = 0;
    while (fila < Files){
        int kolumna = 0;
        while (kolumna < Kolumnes){
            cin >> M[fila][kolumna];
           ++kolumna;
        }
        ++fila;
    }
}

void transposa(vector<vector<int> > &m) {
    int N = m.size();
    int Fila = 0;
    while (Fila < N) {
        int Kolumna = Fila + 1;
        while (Kolumna < N) {
            int auxiliar = m[Fila][Kolumna];
            m[Fila][Kolumna] = m[Kolumna][Fila];
            m[Kolumna][Fila] = auxiliar;
            ++Kolumna;
        }
        ++Fila;
    }
}

void ImprimeixMatriu(const vector<vector<int> > &m) {
    int Files = m.size(), Kolumnes = m[0].size(), fila = 0;
    while (fila < Files){
        int kolumna = 0;
        while (kolumna < Kolumnes){
            cout << m[fila][kolumna] << ' ';
           ++kolumna;
        }
        cout << endl;
        ++fila;
    }
}

int main() {
    int N;
    while (cin >> N) {
        vector<vector<int> > m(N,vector<int>(N));
        YegeixMatriu(m);
        transposa(m);
        ImprimeixMatriu(m);
        cout << endl;
    }
}
