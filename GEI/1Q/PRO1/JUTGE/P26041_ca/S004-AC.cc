#include <iostream>
using namespace std;

void Reversible() {
  string P;
  if (cin >> P) {
    Reversible();
    cout << P << endl;
  }
}
int main() {
  Reversible();
}
