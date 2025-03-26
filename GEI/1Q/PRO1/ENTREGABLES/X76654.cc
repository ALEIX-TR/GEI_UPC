 9: // Almenys 5 Nombres ABCA
  10: // Donat un llistat de numeros naturals busca si
  11: // hi ha cinc enters de quatre digits amb el primer digit igual al ultim.
  12: // Input: Una llista de n numeros naturals.
  13: // Output:"SI" o "NO" depenent de si compleix la condicio.
  14: 
  15: #include <iostream>
  16: using namespace std;
  17: 
  18: int main() {
  19: 	int Natural, Compleixen = 0;
  20: 
  21: 	while (cin >> Natural) {
  22: 		if (Natural % 10 == Natural / 1000 and Natural % 10 != 0) {
  23: 			++Compleixen;
  24: 		}
  25: 	}
  26: 
  27: 	if (Compleixen < 5)
  28: 		cout << "NO";
  29: 	else
  30: 		cout << "SI";
  31: 	// endl;?
  32: }
