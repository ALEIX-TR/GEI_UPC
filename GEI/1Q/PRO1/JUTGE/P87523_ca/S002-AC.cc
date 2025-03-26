#include <iostream>
using namespace std;
int main() {
    char H, O, L, A;
    bool Trobat = false, FI = false;
    cin >> H >> O >> L >> A;
    if (H != '.' and O != '.' and L != '.' and A != '.'){
        while (!FI){
            if (H == 'h' and O == 'o' and L == 'l' and A == 'a') Trobat = FI = true;
            if (A == '.') FI = true;
            H = O;
            O = L;
            L = A;
            cin >> A;
        }
    }
    if (Trobat) cout << "hola" << endl;
    else cout << "adeu" << endl;
}
