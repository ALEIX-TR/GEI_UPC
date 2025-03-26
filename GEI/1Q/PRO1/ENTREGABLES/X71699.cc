11: //Sequencia doblement estocastica
  12: //Comprova que els valors de cada Fila_Columna i columna sumin 10.
  13: //Input: indeterminades matrius amb el seu numero de files i columnes.
  14: //Output: Per cada matriu dir si compleixen la propietat o no.
  15: #include <iostream>
  16: #include <vector>
  17: using namespace std;
  18: /*
  19: Llegeix un vector d'enters.
  20: */
  21: void Llegeix_Vector(vector<int> &V) {
  22:   int Tamany = V.size(), Index = 0;
  23:   while (Index < Tamany) {
  24:     cin >> V[Index];
  25:     ++Index;
  26:   }
  27: }
  28: /*
  29: Retorna veritat si cada Fila o columna suma 10.
  30: */
  31: bool Est_Files_o_Columnes(const vector<int> &V, const int N, bool Fila) {
  32:   bool Estocastica = true;
  33:   int Fila_Columna = 0;
  34:   while (Estocastica and Fila_Columna < N) {
  35:     int Element = 0, Suma = 0;
  36:     while (Estocastica and Element < N) {
  37:       if (Suma > 10) Estocastica = false;
  38:       //Suma L'element depenent si estem fent columnes o files.
  39:       else if (Fila) Suma += V[(Fila_Columna * N) + Element];
  40:       else Suma += V[(Element * N) + Fila_Columna];
  41:       ++Element;
  42:     }
  43:     if (Suma != 10) Estocastica = false;
  44:     ++Fila_Columna;
  45:   }
  46:   return Estocastica;
  47: }
  48: /*
  49: Si cada Fila i columna suman 10 aleshores sera Estocastica
  50: */
  51: bool Es_Estocastica(const vector<int> &V, const int N) {
  52:   return Est_Files_o_Columnes(V,N,true) and Est_Files_o_Columnes(V,N,false);
  53: }
  54: 
  55: int main() {
  56:   int N;
  57:   while (cin >> N) {
  58:     vector<int> V(N*N);
  59:     Llegeix_Vector(V);
  60:     if (Es_Estocastica(V,N)) cout << "true" << endl;
  61:     else cout << "false" << endl;
  62:   }
  63: }
