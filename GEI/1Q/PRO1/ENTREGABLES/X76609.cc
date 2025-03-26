9: // Sentit de moviment
  10: // Donat un punt inicial i un punt final del estil (x,y),
  11: // indica cap a quina direccio a anat, Nord, Sud, Nortoest...
  12: // Input: Un nombre enter positiu que indica la quantitat de quartets d'enters
  13: // que el presedeixen.
  14: // Output: Direccio cap on s'ha dirigit cada un dels quartets
  15: 
  16: #include <iostream>
  17: using namespace std;
  18: 
  19: int main() {
  20: 	int Quartets;
  21: 	cin >> Quartets;
  22: 
  23: 	while (Quartets > 0) {
  24: 		// llegeix els components dels dos punts
  25: 		int X1, Y1, X2, Y2;
  26: 		cin >> X1 >> Y1 >> X2 >> Y2;
  27: 
  28: 		// Vector que formen els dos punts
  29: 		int VX, VY;
  30: 		VX = X2 - X1;
  31: 		VY = Y2 - Y1;
  32: 
  33: 		// Comprobar cada una de les 4 direccions amb el vector
  34: 		if (VY != 0) {
  35: 			if (VY < 0) {
  36: 				cout << 'S';
  37: 
  38: 			} else
  39: 				cout << 'N';
  40: 		}
  41: 
  42: 		if (VX != 0) {
  43: 			if (VX < 0) {
  44: 				cout << 'O';
  45: 
  46: 			} else
  47: 				cout << 'E';
  48: 		}
  49: 
  50: 		cout << endl;
  51: 		--Quartets;
  52: 	}
  53: }
