9: // Sumes de sequencies autodelimitades
  10: // Donades files d'enters no negatius codificats seguint el seguent sistema
  11: // Primer es codifica cada enter en binari i se li dupliquen els digits
  12: // Despres s'ajunten tots els de la fila separats per "01" i acabats en "0101"
  13: // El codi ha de sumar cada una d'aquestes files codificades.
  14: // Input: 0 o mes files formades de 0 i 1.
  15: // Output: La suma dels enters que hi ha codificats a cada fila.
  16: 
  17: #include <iostream>
  18: using namespace std;
  19: 
  20: int main() {
  21: 	char Digit1, Digit2;
  22: 	bool PrincipiSekuencia = true;
  23: 
  24: 	while (cin >> Digit1 >> Digit2) {
  25: 		int Suma = 0;
  26: 		while (Digit1 == Digit2 or PrincipiSekuencia) {
  27: 			int Numero = 0;
  28: 			while (Digit1 == Digit2) {
  29: 				Numero = (Numero * 2) + (int(Digit1) - 48);
  30: 				cin >> Digit1 >> Digit2;
  31: 			}
  32: 
  33: 			cin >> Digit1 >> Digit2;
  34: 			Suma = Suma + Numero;
  35: 			PrincipiSekuencia = false;
  36: 		}
  37: 
  38: 		PrincipiSekuencia = true;
  39: 		cout << Suma << endl;
  40: 	}
  41: }
