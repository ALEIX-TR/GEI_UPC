#include <iostream>
#include <vector>
using namespace std;

void YegeixVector(vector<int> &V) {
  int Tamany = V.size(), Aktual = 0;
  while (Aktual < Tamany) {cin >> V[Aktual]; ++Aktual;}
}

int SumaV(vector<int> &V) {
  int Suma = 0, Tamany = V.size(), Aktual = 0;
  while (Aktual < Tamany) {Suma += V[Aktual]; ++Aktual;}
  return Suma;
}

bool RevisarVektor(vector<int> &V) {
  bool Result = false;
  int Tamany = V.size(), Aktual = 0, Suma = SumaV(V);
  while (!Result and Aktual < Tamany) {
    if (Suma - V[Aktual] == V[Aktual]) Result = true;
    else ++Aktual;
  }
  return Result;
}

int main() {
  int N;
  while(cin >> N) {
    vector<int> V(N);
    YegeixVector(V);
    if (RevisarVektor(V)) cout << "YES" << endl;
    else cout << "NO" << endl;
  }
}
