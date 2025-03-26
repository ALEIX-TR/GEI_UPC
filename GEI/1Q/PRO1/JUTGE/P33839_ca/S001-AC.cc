#include <iostream>
using namespace std;

//P79817
//pre: 2 enters a, b (b>=0)
//post: a^b (0^0=1).

int main(){
  int N;
  while (cin >> N) {
    cout << "La suma dels digits de " << N << " es ";
    int Suma = 0;
    while (N > 0) {
      Suma += N%10;
      N /= 10;
    }
    cout << Suma << '.' << endl;
  }
}
