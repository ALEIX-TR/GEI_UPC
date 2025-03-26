//Sequencia doblement estocastica
//Comprova que els valors de cada Fila_Columna i columna sumin 10.
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
Retorna veritat si cada Fila o columne suma 10.
*/
bool Est_Files_o_Columnes(const vector<int> &V, const int N, bool Fila) {
  bool Estocastica = true;
  int Fila_Columna = 0;
  while (Estocastica and Fila_Columna < N) {
    int Element = 0, Suma = 0;
    while (Estocastica and Element < N) {
      if (Suma > 10) Estocastica = false;
      //Suma L'element depenent si estem fent columnes o files.
      else if (Fila) Suma += V[(Fila_Columna * N) + Element];
      else Suma += V[(Element * N) + Fila_Columna];
      ++Element;
    }
    if (Suma != 10) Estocastica = false;
    ++Fila_Columna;
  }
  return Estocastica;
}
/*
Si cada Fila i columna suman 10 aleshores sera Estocastica
*/
bool Es_Estocastica(const vector<int> &V, const int N) {
  return Est_Files_o_Columnes(V,N,true) and Est_Files_o_Columnes(V,N,false);
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
