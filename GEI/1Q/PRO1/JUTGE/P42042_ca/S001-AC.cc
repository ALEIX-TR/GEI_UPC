#include <iostream>
using namespace std;
int main() {
    char lletra;
    cin >> lletra;
    
    if (lletra >= 'a' and lletra <= 'z') cout << "minuscula" << endl;
    else cout << "majuscula" << endl;
    
    if (lletra == 'A' or lletra == 'a' or lletra == 'E' or 
    lletra == 'e' or lletra == 'I' or lletra == 'i' or lletra == 'O' or 
    lletra == 'o' or lletra == 'u' or lletra == 'U') cout << "vocal" << endl;
    else cout << "consonant" << endl;
}