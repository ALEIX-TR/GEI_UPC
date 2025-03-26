#include <iostream>
#include <vector>
using namespace std;

void YegeixMatriu(vector<vector<int> > &M) {
    int Files = M.size(), Kolumnes = M[0].size(), Tfiles = 0;
    while (Tfiles < Files){
        int Tkolumnes = 0;
        while (Tkolumnes < Kolumnes){
            cin >> M[Tfiles][Tkolumnes];
           ++Tkolumnes;
        }
        ++Tfiles;
    }
}

void RetornaFila(const vector<vector<int> > &M) {
    int Fila;
    cin >> Fila;
    cout << "fila " << Fila << ':';
    int Tamany = M[0].size(), Element = 0;
    while (Element < Tamany) {
        cout << ' ' << M[Fila - 1][Element];
        ++Element;
    }
}

void RetornaKolumna(const vector<vector<int> > &M) {
    int Kolumna;
    cin >> Kolumna;
    cout << "columna " << Kolumna << ':';
    int Tamany = M.size(), Element = 0;
    while (Element < Tamany) {
        cout << ' ' << M[Element][Kolumna - 1];
        ++Element;
    }
}

void RetornaElement(const vector<vector<int> > &M) {
    int Fila, Kolumna;
    cin >> Fila >> Kolumna;
    cout << "element " << Fila << ' ' << Kolumna << ": " <<  M[Fila - 1][Kolumna - 1];
}

int main() {
    int Files, Kolumnes;
    cin >> Files >> Kolumnes;
    vector<vector<int> > M(Files,vector<int>(Kolumnes));
    YegeixMatriu(M);
    string Ordre;
    while(cin >> Ordre) {
        if (Ordre == "fila") RetornaFila(M);
        else if (Ordre == "columna") RetornaKolumna(M);
        else RetornaElement(M);
        cout << endl;
    }
}
