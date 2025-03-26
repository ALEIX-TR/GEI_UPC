//Sequencia doblement estocastica
//Comprova que els valors de cada fila i columna sumin 10.
//Input: indeterminades matrius amb el seu numero de files i columnes.
//Output: Per cada matriu dir si compleixen la propietat o no.
#include <iostream>
#include <vector>
using namespace std;
/*
Llegeix un vector d'enters.
*/
void Llegeix_Vector(vector<int> &V) {
  int Tamany = V.size(), Index = 0;
  while (Index < Tamany) {
    cin >> V[Index];
    ++Index;
  }
}
/*
Retorna veritat si totes les Files sumen 10.
*/
bool Files_Est(const vector<int> &V, const int N) {
  bool Estocastica = true;
  int Fila = 0;
  while (Estocastica and Fila < N) {
    int Element = 0, Suma = 0;
    while (Estocastica and Element < N) {
      if (Suma > 10) Estocastica = false;
      else Suma += V[(Fila * N) + Element];
      ++Element;
    }
    if (Suma != 10) Estocastica = false;
    ++Fila;
  }
  return Estocastica;
}
/*
Retorna veritat si totes les Columnes sumen 10.
*/
bool Columnes_Est(const vector<int> &V, const int N) {
  bool Estocastica = true;
  int Columna = 0;
  while (Estocastica and Columna < N) {
    int Element = 0, Suma = 0;
    while (Estocastica and Element < N) {
      if (Suma > 10) Estocastica = false;
      else Suma += V[(Element * N) + Columna];
      ++Element;
    }
    if (Suma != 10) Estocastica = false;
    ++Columna;
  }
  return Estocastica;
}
/*
Si cada fila i columna suman 10 aleshores sera Estocastica
*/
bool Es_Estocastica(const vector<int> &V, const int N) {
  return Files_Est(V,N) and Columnes_Est(V,N);
}

int main() {
  int N;
  while (cin >> N) {
    vector<int> V(N*N);
    Llegeix_Vector(V);
    if (Es_Estocastica(V,N)) cout << "true" << endl;
    else cout << "false" << endl;
  }
}
