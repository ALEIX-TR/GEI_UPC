#include <iostream>
using namespace std;

int main() {
    int FS, CS;
    cin >> FS >> CS;
    int Suma = 0, FC = FS * CS;
    while (FC > 0){
        char F;
        cin >> F;
        --FC;
        Suma = Suma + (F - '0');
    }
    cout << Suma << endl;
}