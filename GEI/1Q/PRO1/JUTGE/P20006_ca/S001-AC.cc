#include <iostream>
using namespace std;

int Resultat() {
    char input;
    int R;
    cin >> input;
    if (input == '+') {
        R = Resultat() + Resultat();
    }
    else if (input == '*') {
        R = Resultat() * Resultat();
    }
    else if (input == '-') {
        R = Resultat() - Resultat();
    }
    else {
        R = int(input - '0');
    }
    return R;
}

int main() {
  cout << Resultat() << endl;
}

