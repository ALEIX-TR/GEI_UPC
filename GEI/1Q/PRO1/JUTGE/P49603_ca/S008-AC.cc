#include <iostream>
using namespace std;

int main() {
	int n; 
	int count = 1;
	int last = 0;
	while (cin >> n) {
		string prev, next;
		bool increasing = true;
		if (n > 0) cin >> prev;
		for (int i = 1; i < n; ++i) {
			cin >> next;
			if (prev > next) increasing = false;
			prev = next;
		}
		if (increasing) last = count;
		++count;
	}
	if (last != 0) cout << "L'ultima linia ordenada creixentment es la " << last;
	else cout << "No hi ha cap linia ordenada creixentment";
	cout << '.' << endl;
}
