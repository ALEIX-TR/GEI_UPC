 11: //Expressions min-max
  12: #include <iostream>
  13: #include <string>
  14: using namespace std;
  15: //Pre: Dos Numeros enters
  16: //Post: El Numero maxim d'entre els dos
  17: int Max(int Numero1, int Numero2) {
  18:   int Maxim = Numero1;
  19:   if (Numero2 > Numero1) Maxim = Numero2;
  20:   return Maxim;
  21: }
  22: //Pre: Dos Numeros enters
  23: //Post: El Numero minim d'entre els dos
  24: int Min(int Numero1, int Numero2) {
  25:   int Minim = Numero1;
  26:   if (Numero2 < Numero1) Minim = Numero2;
  27:   return Minim;
  28: }
  29: //Pre: res
  30: //Post: El valor final de fer Maxims i/o minims
  31: int mmeval() {
  32:   string Max_Min_Num;
  33:   cin >> Max_Min_Num;
  34:   int Resultat = 0;
  35:   if (Max_Min_Num == "max") Resultat = Max(mmeval(), mmeval());
  36:   if (Max_Min_Num == "min") Resultat = Min(mmeval(), mmeval());
  37:   if (Max_Min_Num != "max" and Max_Min_Num != "min")
  38:   Resultat = stoi(Max_Min_Num);
  39:   return Resultat;
  40: }
  41: 
  42: int main() {
  43:   int N;
  44:   cin >> N;
  45:   while (N > 0){
  46:     cout << mmeval() << endl;
  47:     --N;
  48:   }
  49: }
