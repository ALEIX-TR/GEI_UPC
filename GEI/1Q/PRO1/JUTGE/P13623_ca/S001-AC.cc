#include <iostream>
using namespace std;

int main () {
    int FIL, COL;
    cin >> FIL >> COL;
    
    int FILCOL = FIL * COL, SUM = 0, COLM = COL;
    bool B = true;
    while (FILCOL > 0) {
        char MON;
        cin >> MON;
        if (COLM <= 0){
            COLM = COL;
            if (COL % 2 == 0){
                if (B) B = false;
                else B = true;
            }
        }
        if (B) {
            SUM = SUM + (MON - '0');
            B = false;
        }else B = true;
        --COLM;
        --FILCOL;
    }
    cout << SUM << endl;
}