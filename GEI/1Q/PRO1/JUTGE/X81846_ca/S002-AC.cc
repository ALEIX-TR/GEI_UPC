#include <iostream>
#include <vector>
using namespace std;

void YegeixVektor(vector<int> &V) {
  int Aktual = 0, TamV = V.size();
  while (Aktual < TamV) {
    cin >> V[Aktual];
    ++Aktual;
  }
}

int POT2(int Elevacio) {
  int Result = 1;
  while (Elevacio > 0) {
    Result *= 2;
    --Elevacio;
  }
  return Result;
}

void ImprimirLinea(vector<int> &V) {
  int Akt = 0;
  bool Fi = false;
  while (!Fi and Akt < 20) {
    if (V[Akt] < 0) Fi = true;
    else {
      if (V[Akt] >= 2) cout << '#';
      else if (V[Akt] == 1) cout << '.';
      else cout << ' ';
    }
    ++Akt;
  }
  cout << endl;
}

void ImprimeixVektor(vector<int> V) {
  int Linea = 0;
  while(Linea < 20) {
    int Akt = 0, Pot2N;
    vector<int> Res(20, -1);
    bool PNoNul = false;
    while(Akt < 20) {
      Pot2N = POT2(Akt);
      int P = ((V[Linea*2])/Pot2N)%2, Q = ((V[Linea*2+1])/Pot2N)%2;
      if (P == 1 or Q == 1) PNoNul = true;
      if (PNoNul) Res[20 - 1 - Akt] += ((2 * P) + Q + 1);
      ++Akt;
    }
    ImprimirLinea(Res);
    ++Linea;
  }
  
}

int main() {
  int N;
  cin >> N;
  while (N > 0) {
    vector<int> V(40);
    YegeixVektor(V);
    ImprimeixVektor(V);
    --N;
    cout << endl;
  }
}
