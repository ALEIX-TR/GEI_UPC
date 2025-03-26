#include <iostream>
using namespace std;

int main() {
    char Lletra;
    cin >> Lletra;
    while (Lletra != '.' and Lletra != 'a') cin >> Lletra;
    if (Lletra == '.') cout << "no" << endl;
    else cout << "si" << endl;
    }
