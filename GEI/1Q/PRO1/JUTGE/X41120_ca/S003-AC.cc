#include <iostream>
#include <vector>
using namespace std;

void YegeixVektor(vector<int> &V) {
  int Tamany = V.size(), Aktual = 0;
  while (Aktual < Tamany) {cin >> V[Aktual]; ++Aktual;}
}

void ImprimeixVektor(vector<int> &V) {
  int Tamany = V.size(), Aktual = 0;
  while (Aktual < Tamany) {cout << ' ' << V[Aktual]; ++Aktual;}
}

vector<int> calcula_cims(const vector<int> &V) {
  vector<int> Cims;
  int Tamany = V.size(), Ant = 0, Akt = 1, Seg = 2;
  while (Seg < Tamany) {
    if (V[Ant] < V[Akt] and V[Akt] > V[Seg]) Cims.push_back(V[Akt]);
    ++Ant;
    ++Akt;
    ++Seg;
  }
  return Cims;
}

void ImprimeixResposta(const vector<int> &V) {
  vector<int> Cims;
  Cims = calcula_cims(V);
  cout << Cims.size() << ':';
  ImprimeixVektor(Cims);
  cout << endl;
  int Tamany = Cims.size(), Aktual = 0;
  bool Trobat = false;
  while (Aktual < Tamany - 1) {
    if (Cims[Aktual] > Cims[Tamany-1]) {
      if (Trobat) cout << ' ';
      cout<<Cims[Aktual];
      Trobat=true;
    }
    ++Aktual;
  }
  if (!Trobat) cout << '-';
  cout << endl;
}

int main (){
  int N;
  cin >> N;
  vector<int> DES(N);
  YegeixVektor(DES);
  ImprimeixResposta(DES);
}
