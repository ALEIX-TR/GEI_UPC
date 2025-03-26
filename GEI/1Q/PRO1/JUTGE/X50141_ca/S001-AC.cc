#include <iostream>
using namespace std;
int max(int a, int b){
  int MAX = a;
  if (b > a) MAX = b;
  return MAX;
}

int engreixa(int x){
  int Xifra;
  if (x < 10){
    Xifra = x;
  }else{
    int greixos = engreixa(x / 10);
    int MAX = max(greixos % 10, x % 10);
    Xifra = greixos * 10 + MAX;
  }
  return Xifra;
}


int main() {
  int x;
  while (cin >> x) cout << engreixa(x) << endl;
}
