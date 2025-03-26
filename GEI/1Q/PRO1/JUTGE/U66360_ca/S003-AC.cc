//Amenaces alienigenes
//Informar de la zona on hi ha mes densitat d'alienigenes d'un espai donat.
//Input: Una sekuencia de matrius cada una amb un tamany de files i columnes,
//akabant amb un '0'.
//Output: En kina coordenada hi ha la major densitat, quina es la seva suma i
//quin es el seu valor maxim.
#include <iostream>
#include <vector>
using namespace std;
/*
Donada una matriu llegeix i omple la matriu amb els valors llegits.
*/
void Llegeix_Matriu(vector<vector<int> > &M) {
  int Files = M.size(), Columnes = M[0].size(), Fila = 0;
  while (Fila < Files) {
    int Columna = 0;
    while (Columna < Columnes) {
      cin >> M[Fila][Columna];
      ++Columna;
    }
    ++Fila;
  }
}

/*
Retorna els numeros demanats utilitzant una matriu i una matriu kuadrada.
*/
void Analitza_Imprimeix(const vector<vector<int> > &M) {
  int TamanyQuadrada;
  cin >> TamanyQuadrada;
  int Files = M.size(), Columnes = M[0].size(), Fila = 0, MFila = 0,
  MColumna = 0, SumaMaxima = 0, ValorMaxim = 0;
  while (Fila <= Files - TamanyQuadrada) {
    int Columna = 0;
    while (Columna <= Columnes - TamanyQuadrada) {
      vector<int> MQuad(TamanyQuadrada * TamanyQuadrada);
      int FilaQuad = 0;
      //Llegeix matriu quadrada que es veu com un vector
      while (FilaQuad < TamanyQuadrada) {
        int ColumnaQuad = 0;
        while (ColumnaQuad < TamanyQuadrada) {
          MQuad[FilaQuad * TamanyQuadrada + ColumnaQuad] =
          M[FilaQuad + Fila][ColumnaQuad + Columna];
          ++ColumnaQuad;
        }
        ++FilaQuad;
      }
      //Extreu la major densitat de l'actual i ho compara amb el maxim
      int Suma = 0, PosicioVector = 0, Maxim = 0;
      while (PosicioVector < TamanyQuadrada * TamanyQuadrada) {
        Suma += MQuad[PosicioVector];
        if (MQuad[PosicioVector] > Maxim) Maxim = MQuad[PosicioVector];
        ++PosicioVector;
      }
      if (Suma > SumaMaxima) {
        SumaMaxima = Suma;
        ValorMaxim = Maxim;
        MFila = Fila;
        MColumna = Columna;
      }
      ++Columna;
    }
    ++Fila;
  }
  cout << '(' << MFila << ',' << MColumna<< ')' << endl
  << SumaMaxima << endl << ValorMaxim << endl;
}
int main() {
  int Files, Columnes;
  cin >> Files;
  while (Files != 0) {
    cin >> Columnes;
    vector<vector<int> > M(Files,vector<int>(Columnes));
    Llegeix_Matriu(M);
    Analitza_Imprimeix(M);
    cin >> Files;
  }
  
}
