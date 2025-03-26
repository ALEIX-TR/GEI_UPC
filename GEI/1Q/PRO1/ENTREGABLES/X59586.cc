   9: // Concurs de talents
  10: // Donat tres valors entre 1 i 10, fes la seva mitjana tenint en compte que
  11: // si dos valors son iguals i un es diferent, s'haura de sumar 1 si els dos
  12: // iguals son majors al diferent i s'haura de restar 1 si els dos iguals son
  13: // menors.
  14: // A mes a mes si el valor final esta entre el 5 i 10 s'ha d'escriure un text
  15: // depenen del interval en que es troba. Valor >= 9 escriu "Medalla or",
  16: // 7 <= Valor > 9 escriu "Medalla plata" i 5 <= Valor > 7 "Medalla bronze"
  17: // En el cas de que la mitjana no superi el 5 s'escriu "Cap premi"
  18: // Si els tres valors inicials han estat iguals i la mitjana es troba entre
  19: // 5 i 10 s'ha d'escriure "Premi a la unanimitat".
  20: // Input: 3 numeros enters <= 10 i >=1.
  21: // Output: El text d'obtencio de medalla, el valor de la mitjana amb
  22: // dos decimals i el text del premi a la unanimitat
  23: 
  24: #include <iostream>
  25: using namespace std;
  26: 
  27: int main() {
  28: 	cout.setf(ios::fixed);
  29: 	cout.precision(2);
  30: 
  31: 	double Nota1, Nota2, Nota3;
  32: 	cin >> Nota1 >> Nota2 >> Nota3;
  33: 
  34: 	double Mitjana;
  35: 	Mitjana = (Nota1 + Nota2 + Nota3) / 3;
  36: 
  37: 	// sumar i restar a la mitjana si hi ha dos notes iguals
  38: 	if (Nota1 != Nota2 or Nota1 != Nota3) {
  39: 		if (Nota1 == Nota2) {
  40: 			if (Nota1 > Nota3)
  41: 				++Mitjana;
  42: 			else
  43: 				--Mitjana;
  44: 		} else if (Nota1 == Nota3) {
  45: 			if (Nota1 > Nota2)
  46: 				++Mitjana;
  47: 			else
  48: 				--Mitjana;
  49: 		} else if (Nota3 == Nota2) {
  50: 			if (Nota3 > Nota1)
  51: 				++Mitjana;
  52: 			else
  53: 				--Mitjana;
  54: 		}
  55: 		if (Mitjana > 10)
  56: 			Mitjana = 10;
  57: 	}
  58: 
  59: 	// Entregar premis
  60: 	if (Mitjana >= 9)
  61: 		cout << "Medalla or" << endl;
  62: 	else if (Mitjana >= 7)
  63: 		cout << "Medalla plata" << endl;
  64: 	else if (Mitjana >= 5)
  65: 		cout << "Medalla bronze" << endl;
  66: 	else
  67: 		cout << "Cap premi" << endl;
  68: 
  69: 	cout << Mitjana << endl;
  70: 
  71: 	// Comprovar si les tres notes son iguals i te una medalla
  72: 	if (Nota1 == Nota2 and Nota1 == Nota3 and Mitjana >= 5)
  73: 		cout << "Premi a la unanimitat" << endl;
  74: }
