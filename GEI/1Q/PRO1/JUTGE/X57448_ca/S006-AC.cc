#include <iostream>
using namespace std;

void print(int Tam, int Pos){
    cout << Tam;
    if (Tam != 0) cout << '(' << Pos << ')';
}

int main() {
    char ANT;
    while (cin >> ANT){
        int TA, TC, TG, TT, PA, PC, PG, PT, Posi;
        TA = TC = TG = TT = PA = PC = PG = PT = 0;
        Posi = 1;
        while (ANT != '.'){
            int Cant = 1, PosSec = Posi;
            char AKT;
            cin >> AKT;
            while (ANT == AKT){
                cin >> AKT;
                ++ Cant;
                ++ Posi;
            }
            if (ANT == 'A'){
                if (Cant > TA){
                    TA = Cant;
                    PA = PosSec;
                }
            }else if (ANT == 'C'){
                if (Cant > TC){
                    TC = Cant;
                    PC = PosSec;
                }
            }else if (ANT == 'G'){
                if (Cant > TG){
                    TG = Cant;
                    PG = PosSec;
                }
        
            }else if (ANT == 'T'){
                if (Cant > TT){
                    TT = Cant;
                    PT = PosSec;
                }
            }

            ANT = AKT;
            ++ Posi;
        }
        cout << '"' << 'A' << '"' << " = ";
        print(TA, PA);
        cout << ", " << '"' << 'C' << '"' << " = ";
        print(TC, PC);
        cout << ", " << '"' << 'G' << '"' << " = ";
        print(TG, PG);
        cout << ", " << '"' << 'T' << '"' << " = ";
        print(TT, PT);
        cout << endl;
    }
}
