 11: #include <iostream>
  12: #include <vector>
  13: using namespace std;
  14: 
  15: struct Numeros {
  16:   string Valor;
  17:   int OrdreS;
  18: };
  19: 
  20: //Llegeix el vector comprimint els numeros que son iguals i el vector final
  21: 
  22: void read_vector(vector<Numeros> &V) {
  23:   int Tamany = V.size(), Actual = 0, Ordre = 0, Iguals = 0;
  24:   string Anterior = "0";
  25:   while (Ordre < Tamany) {
  26:     string Llegit;
  27:     cin >> Llegit;
  28:     if (Llegit != Anterior) {
  29:       Anterior = Llegit;
  30:       V[Actual].Valor = Llegit;
  31:       V[Actual].OrdreS = Ordre;
  32:       ++Actual;
  33:     }else ++Iguals;
  34:     ++Ordre;
  35:   }
  36:   while (Iguals > 0) {
  37:     V.pop_back();
  38:     --Iguals;
  39:   }
  40: }
  41: 
  42: // Busqueda Binaria
  43: int first_position(const vector<Numeros> &V, const string z) {
  44:   int MinimV = 0, MaximV = V.size() - 1, Meitat = 0, TamanyZ = z.length();
  45:   bool Trobat = false;
  46:   while (!Trobat and MinimV <= MaximV) {
  47:     Meitat = (MinimV + (MaximV - MinimV) / 2);
  48:     int TamanyM = V[Meitat].Valor.length();
  49:     if (TamanyZ == TamanyM) {
  50:       if (V[Meitat].Valor < z) MinimV = Meitat + 1;
  51:       else if (V[Meitat].Valor > z) MaximV = Meitat - 1;
  52:       else Trobat = true;
  53:     }else if (TamanyZ > TamanyM) MinimV = Meitat + 1;
  54:     else MaximV = Meitat - 1;
  55:   }
  56:   //Comprovar si es correcte o es troba a un canvi de digits
  57:   int TamanyMF = V[Meitat].Valor.length();
  58:   if (TamanyMF < TamanyZ) return V[Meitat + 1].OrdreS;
  59:   else if (TamanyMF > TamanyZ) return V[Meitat - 1].OrdreS;
  60:   else return V[Meitat].OrdreS;
  61: }
  62: 
  63: int main() {
  64:   int n;
  65:   cin >> n;
  66:   vector<Numeros> v(n);
  67:   read_vector(v);
  68:   string z;
  69:   while (cin >> z) {
  70:     cout << first_position(v, z) << endl;
  71:   }
  72: }
  73: 
