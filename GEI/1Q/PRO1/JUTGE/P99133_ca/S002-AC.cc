#include <iostream>
#include <vector>
#include <string>
using namespace std;

void ImprimirInvers(string Paraula) {
  int Llargada = Paraula.length();
  while (Llargada > 0){
    cout << Paraula[Llargada - 1];
    --Llargada;
  }
  cout << endl;
}

void Funcio(int N, int VoltaAktual) {
  string Paraula;
  cin >> Paraula;
  if (VoltaAktual < N) Funcio(N, VoltaAktual + 1);
  ImprimirInvers(Paraula);
}

int main() {
  int N;
  cin >> N;
  if (N >= 1) Funcio(N, 1);
}
