// Majúscules i minúscules
// Pasa un lletra majuscula a minuscula i viceversa
// Input: Un caracter entre a-z i A-B
// Output: Un caracter entre a-z i A-B

#include <iostream>
using namespace std;

int main() {
    char Lletra;
    cin >> Lletra;

    if ( Lletra >= 'a' and Lletra <= 'z')
    cout << char( Lletra - 'a' + 'A') << endl;

    else cout << char( Lletra - 'A' + 'a') << endl;
}
