#include <iostream>
using namespace std;

void YegirParaula() {
  string P;
  cin >> P;
  if (P != "fi") {YegirParaula();cout << P << endl;}
}

int main() {
  YegirParaula();
}
