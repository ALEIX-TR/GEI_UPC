#include <iostream>
#include <vector>
using namespace std;

typedef vector<char> row;
typedef vector<row> Matrix;

void YegeixVektor(vector<string> &V) {
  int Tamany = V.size(), Aktual = 0;
  while (Aktual < Tamany) {cin >> V[Aktual]; ++Aktual;}
}

void YegeixMatriu(vector<vector<char> > &M) {
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

void ImprimirMatriu(vector<vector<char> > &M) {
    int Files = M.size(), Kolumnes = M[0].size(), fila = 0;
    while (fila < Files){
        int kolumna = 0;
        while (kolumna < Kolumnes){
            cout << M[fila][kolumna];
           ++kolumna;
           if (kolumna >= Kolumnes) cout << endl;
           else cout << ' ';
        }
        ++fila;
    }
}

void CanviarTrobades(Matrix &M, int Tam, int F, int C, int Fil, int Col) {
  int Akt = 0;
  while (Akt < Tam) {
    if (M[Fil+(F*Akt)][Col+(C*Akt)] > 'Z') {
      M[Fil+(F*Akt)][Col+(C*Akt)] += 'A'-'a';
    }
    ++Akt;
  }
}

void ScanejaVoltant(Matrix &M, string &Para,int Fil,int Col) {
  int TamMot=Para.length(),Akt=1,TamFil=M.size(), TamCol=M[0].size();
  bool Erronea = false;
  if (Fil + TamMot > TamFil) Erronea = true;
  while (!Erronea and Akt < TamMot) {
    char PYet = Para[Akt], SYet = M[Fil+Akt][Col];
    if (PYet!=SYet and PYet!=SYet-'A'+'a') Erronea = true;
    else ++Akt;
  }
  if (!Erronea) CanviarTrobades(M,TamMot,1,0,Fil,Col);
  Erronea = false;
  Akt = 1;
  if (Fil + TamMot > TamFil or Col + TamMot > TamCol) Erronea = true;
  while (!Erronea and Akt < TamMot) {
    char PYet = Para[Akt], SYet = M[Fil+Akt][Col+Akt];
    if (PYet!=SYet and PYet!=SYet-'A'+'a') Erronea = true;
    else ++Akt;
  }
  if (!Erronea) CanviarTrobades(M,TamMot,1,1,Fil,Col);
  Erronea = false;
  Akt = 1;
  if (Col + TamMot > TamCol) Erronea = true;
  while (!Erronea and Akt < TamMot) {
    char PYet = Para[Akt], SYet = M[Fil][Col+Akt];
    if (PYet!=SYet and PYet!=SYet-'A'+'a') Erronea = true;
    else ++Akt;
  }
  if (!Erronea) CanviarTrobades(M,TamMot,0,1,Fil,Col);
}

void ResolSopa(Matrix &Sopa, vector<string> &Yis) {
  int TamFil=Sopa.size(), TamCol=Sopa[0].size(), TamYis=Yis.size() ,AktFil=0;
  while (AktFil < TamFil) {
    int AktCol = 0;
    while (AktCol < TamCol) {
      int AktYis = 0;
      while (AktYis < TamYis) {
        char PYet = Yis[AktYis][0], SYet = Sopa[AktFil][AktCol];
        if (PYet==SYet or PYet==SYet-'A'+'a') {
          ScanejaVoltant(Sopa,Yis[AktYis],AktFil,AktCol);
        }
        ++AktYis;
      }
      ++AktCol;
    }
    ++AktFil;
  }
}

int main(){
  int X,M,N;
  bool P = true;
  while (cin >> X >> M >> N) {
    if (!P) cout << endl;
    else P = false;
    vector<string> Yistat(X);
    YegeixVektor(Yistat);
    Matrix Sopa(M,row(N));
    YegeixMatriu(Sopa);
    ResolSopa(Sopa,Yistat);
    ImprimirMatriu(Sopa);
  }
}
