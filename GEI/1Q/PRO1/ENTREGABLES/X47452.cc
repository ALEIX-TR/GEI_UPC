 // Numeros estrany
  10: // Donat un numero si al sumar totes les seves xifres
  11: // elevades a la cantitat de xifres totals es igual al numero inicial,
  12: // direm que es tracte de un numero extrany.
  13: // Input: Un numero natural entre 0 i 10000 sense inclourels.
  14: // Output: El numero indicant si es estrany o no.
  15: 
  16: #include <iostream>
  17: using namespace std;
  18: 
  19: int main() {
  20: 	int Natural;
  21: 	cin >> Natural;
  22: 
  23: 	int Xifra1, Xifra2, Xifra3, Xifra4;
  24: 	Xifra1 = Natural % 10;
  25: 	Xifra2 = (Natural / 10) % 10;
  26: 	Xifra3 = (Natural / 100) % 10;
  27: 	Xifra4 = Natural / 1000;
  28: 
  29: 	// Trobar el nombre de xifres i fer la suma d'elevats
  30: 	int Suma;
  31: 	if (Xifra4 == 0) {
  32: 		if (Xifra3 == 0) {
  33: 			if (Xifra2 == 0) {
  34: 				Suma = Xifra1;
  35: 			} else {
  36: 				Suma = Xifra2 * Xifra2 + Xifra1 * Xifra1;
  37: 			}
  38: 		} else {
  39: 			Suma = Xifra3 * Xifra3 * Xifra3 + Xifra2 * Xifra2 * Xifra2 + Xifra1 * Xifra1 * Xifra1;
  40: 		}
  41: 	} else {
  42: 		Suma = Xifra4 * Xifra4 * Xifra4 * Xifra4 + Xifra3 * Xifra3 * Xifra3 * Xifra3 +
  43: 			   Xifra2 * Xifra2 * Xifra2 * Xifra2 + Xifra1 * Xifra1 * Xifra1 * Xifra1;
  44: 	}
  45: 	// Comprova si es igual al numero inicial
  46: 	if (Suma == Natural)
  47: 		cout << "strange number: " << Natural << endl;
  48: 	else
  49: 		cout << "not strange number: " << Natural << endl;
  50: }
