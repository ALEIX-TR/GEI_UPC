11: // Amenaces alienigenes
  12: // Informar de la zona on hi ha mes densitat d'alienigenes d'un espai donat.
  13: // Input: Una sekuencia de matrius cada una amb un tamany de files i columnes,
  14: // akabant amb un '0'.
  15: // Output: En kina coordenada hi ha la major densitat, quina es la seva suma i
  16: // quin es el seu valor maxim.
  17: #include <iostream>
  18: #include <vector>
  19: using namespace std;
  20: /*
  21: Donada una matriu llegeix i omple la matriu amb els valors llegits.
  22: */
  23: void Llegeix_Matriu(vector<vector<int> > &M) {
  24: 	int Files = M.size(), Columnes = M[0].size(), Fila = 0;
  25: 	while (Fila < Files) {
  26: 		int Columna = 0;
  27: 		while (Columna < Columnes) {
  28: 			cin >> M[Fila][Columna];
  29: 			++Columna;
  30: 		}
  31: 		++Fila;
  32: 	}
  33: }
  34: 
  35: /*
  36: Retorna els numeros demanats utilitzant una matriu i una matriu kuadrada.
  37: */
  38: void Analitza_Imprimeix(const vector<vector<int> > &M) {
  39: 	int TamanyQuadrada;
  40: 	cin >> TamanyQuadrada;
  41: 	int Files = M.size(), Columnes = M[0].size(), Fila = 0, MFila = 0, MColumna = 0, SumaMaxima = 0,
  42: 		ValorMaxim = 0;
  43: 	while (Fila <= Files - TamanyQuadrada) {
  44: 		int Columna = 0;
  45: 		while (Columna <= Columnes - TamanyQuadrada) {
  46: 			vector<int> MQuad(TamanyQuadrada * TamanyQuadrada);
  47: 			int FilaQuad = 0;
  48: 			// Llegeix matriu quadrada que es veu com un vector
  49: 			while (FilaQuad < TamanyQuadrada) {
  50: 				int ColumnaQuad = 0;
  51: 				while (ColumnaQuad < TamanyQuadrada) {
  52: 					MQuad[FilaQuad * TamanyQuadrada + ColumnaQuad] =
  53: 						M[FilaQuad + Fila][ColumnaQuad + Columna];
  54: 					++ColumnaQuad;
  55: 				}
  56: 				++FilaQuad;
  57: 			}
  58: 			// Extreu la major densitat de l'actual i ho compara amb el maxim
  59: 			int Suma = 0, PosicioVector = 0, Maxim = 0;
  60: 			while (PosicioVector < TamanyQuadrada * TamanyQuadrada) {
  61: 				Suma += MQuad[PosicioVector];
  62: 				if (MQuad[PosicioVector] > Maxim)
  63: 					Maxim = MQuad[PosicioVector];
  64: 				++PosicioVector;
  65: 			}
  66: 			if (Suma > SumaMaxima) {
  67: 				SumaMaxima = Suma;
  68: 				ValorMaxim = Maxim;
  69: 				MFila = Fila;
  70: 				MColumna = Columna;
  71: 			}
  72: 			++Columna;
  73: 		}
  74: 		++Fila;
  75: 	}
  76: 	cout << '(' << MFila << ',' << MColumna << ')' << endl
  77: 		 << SumaMaxima << endl
  78: 		 << ValorMaxim << endl;
  79: }
  80: int main() {
  81: 	int Files, Columnes;
  82: 	cin >> Files;
  83: 	while (Files != 0) {
  84: 		cin >> Columnes;
  85: 		vector<vector<int> > M(Files, vector<int>(Columnes));
  86: 		Llegeix_Matriu(M);
  87: 		Analitza_Imprimeix(M);
  88: 		cin >> Files;
  89: 	}
  90: }
