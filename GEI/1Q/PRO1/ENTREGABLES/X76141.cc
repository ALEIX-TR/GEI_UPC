9: // Primers n nombres estranys
  10: // Digues els n primers nombres estranys
  11: // Input: Un valor enter
  12: // Output: Tants numeros enters estranys com demani l'input
  13: #include <iostream>
  14: using namespace std;
  15: 
  16: int main() {
  17: 	int quantitatdestranys;
  18: 	cin >> quantitatdestranys;
  19: 
  20: 	// Anar comprovant enter per enter si es tracta d'un nombre estrany
  21: 	// Acaba quan troba n nombres estranys
  22: 	int valorinicial = 1;
  23: 	while (quantitatdestranys > 0) {
  24: 		// Conta les xifres del valor que s'esta comprovant
  25: 		int valor = valorinicial, xifres1 = 0;
  26: 		while (valor > 0) {
  27: 			valor = valor / 10;
  28: 			++xifres1;
  29: 		}
  30: 
  31: 		valor = valorinicial;
  32: 
  33: 		// Suma les xifres elevades a la quantitat total de xifres
  34: 		int suma = 0, producte;
  35: 		while (valor > 0) {
  36: 			producte = 1;
  37: 			int xifres2 = xifres1;
  38: 			while (xifres2 > 0) {
  39: 				producte = producte * (valor % 10);
  40: 				--xifres2;
  41: 			}
  42: 			suma = suma + producte;
  43: 			valor = valor / 10;
  44: 		}
  45: 
  46: 		if (valorinicial == suma) {
  47: 			cout << valorinicial << ' ';
  48: 			--quantitatdestranys;
  49: 		}
  50: 		++valorinicial;
  51: 	}
  52: 	// cout << endl;
  53: }
