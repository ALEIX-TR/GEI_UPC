#include <iostream>
#include <vector>
using namespace std;

void AfegirAlContador(vector<int> &C, int N, int b) {
  while (N > 0) {
    ++C[N % b];
    N /= b;
  }
}

bool mateixos_digits(int x, int y, int b) {
  bool Result = true;
  vector<int> Contador(b,0);
  AfegirAlContador(Contador,x,b);
  AfegirAlContador(Contador,y,b);
  vector<int> ContadorRes(b,0);
  AfegirAlContador(ContadorRes,x*y,b);
  int Aktual = 0;
  while (Result and Aktual < b) {
    if (Contador[Aktual] != ContadorRes[Aktual]) Result = false;
    ++Aktual;
  }
  return Result;
}

void escriu(int n, int b) {
  if (b > n) {
    if (n > 9) cout << char('A' + n-10);
    else cout << n;
  }else {
    escriu(n/b,b);
    if (n%b > 9) cout << char('A' + (n%b)-10);
    else cout << n%b;
  }
}

int main() {
  int A, B;
  while (cin >> A >> B) {
    cout << "solucions per a " << A << " i " << B << endl;
    int Base = 2;
    bool min1 = false;
    while (Base < 17) {
      if (mateixos_digits(A,B,Base)) {
        escriu(A,Base);
        cout << " * ";
        escriu(B,Base);
        cout << " = ";
        escriu(A*B,Base);
        cout << " (base " << Base << ')' << endl;
        min1 = true;
      }
      ++Base;
    }
    if (!min1) cout << "cap" << endl;
    cout << endl;
  }
}
