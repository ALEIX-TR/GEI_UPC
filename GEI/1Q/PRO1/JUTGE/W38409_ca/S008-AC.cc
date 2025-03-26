//Expressions min-max
#include <iostream>
#include <string>
using namespace std;
//Pre: Dos Numeros enters
//Post: El Numero maxim d'entre els dos
int Max(int Numero1, int Numero2) {
  int Maxim = Numero1;
  if (Numero2 > Numero1) Maxim = Numero2;
  return Maxim;
}
//Pre: Dos Numeros enters
//Post: El Numero minim d'entre els dos
int Min(int Numero1, int Numero2) {
  int Minim = Numero1;
  if (Numero2 < Numero1) Minim = Numero2;
  return Minim;
}
//Pre: res
//Post: El valor final de fer Maxims i/o minims
int mmeval() {
  string Max_Min_Num;
  cin >> Max_Min_Num;
  int Resultat = 0;
  if (Max_Min_Num == "max") Resultat = Max(mmeval(), mmeval());
  if (Max_Min_Num == "min") Resultat = Min(mmeval(), mmeval());
  if (Max_Min_Num != "max" and Max_Min_Num != "min")
  Resultat = stoi(Max_Min_Num);
  return Resultat;
}

int main() {
  int N;
  cin >> N;
  while (N > 0){
    cout << mmeval() << endl;
    --N;
  }
}
