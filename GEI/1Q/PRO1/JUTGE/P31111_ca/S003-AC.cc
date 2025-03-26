#include <iostream>
using namespace std;

int main() {
    int PO = 0, PC = 0;
    char PAR;
    bool PB = true;
    while (cin >> PAR and PB) {
        if (PAR == '('){
            ++ PO;
        }else {
            ++ PC;
            if (PC > PO) PB = false;
        }
    }
    if (PB and PC == PO) cout << "si" << endl;
    else cout << "no" << endl;
}
