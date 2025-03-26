#include <iostream>
#include <vector>
using namespace std;

void YegeixVektor(vector<int> &V) {
  int Tamany = V.size(), Aktual = 0;
  while (Aktual < Tamany) {cin >> V[Aktual]; ++Aktual;}
}

bool Primer(int n, int divisor){
    bool noes_divisible;
    if (n <= 1) noes_divisible = false;
    else if (divisor*divisor > n) noes_divisible = true;
    else if (n % divisor == 0 and n != divisor) noes_divisible = false;
    else noes_divisible = Primer(n, ++divisor);
    return noes_divisible;
}

bool Analisis(const vector<int> &V) {
  bool Result = false;
  int Tamany = V.size(), Aktual = 0;
  while (!Result and Aktual < Tamany) {
    int Aktual2 = 0;
    while (!Result and Aktual2 < Tamany) {
      if (Aktual2 != Aktual and Primer(V[Aktual]+V[Aktual2],2)) Result = true;
      ++Aktual2;
    }
    ++Aktual;
  }
  return Result;
}

int main() {
  int N;
  while (cin >> N) {
    vector<int> V(N);
    YegeixVektor(V);
    if (Analisis(V)) cout << "si" << endl;
    else cout << "no" << endl;
  }
}
