#include <iostream>
using namespace std;
/*
* @pre c1, c2, c3 en {A, 2, 3, ..., 8, 9, 0, J, Q, K}
* @post Retorna "Trio d'Asos!", "Trio", "Parella", o
*       "Totes les cartes diferents" segons c1, c2 i c3.
*/
string poker_hand(char c1, char c2, char c3){
	if (c1 == c2 and c2 == c3){
		if (c1 == 'A') return "Trio d'Asos!";
		else return "Trio";
	}else if (c1 == c2 or c2 == c3 or c3 == c1) return "Parella";
	else return "Totes les cartes diferents";
}

int main() {
	char c1, c2, c3;
	while (cin >> c1 >> c2 >> c3) {
		cout << poker_hand(c1, c2, c3) << endl;
	}
	return 0;
}
