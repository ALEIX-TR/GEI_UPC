#include <iostream>
using namespace std;

int main() {
    char lletra;
    cin >> lletra;

    if ( lletra >= 'a' and lletra <= 'z')
    cout << char( lletra - 'a' + 'A') << endl;
    else cout << char( lletra - 'A' + 'a') << endl;
}