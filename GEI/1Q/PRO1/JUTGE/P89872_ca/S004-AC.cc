#include <iostream>
using namespace std;

int main() {
    string MAX, MAX2, P;
    cin >> MAX >> MAX2;
    if (MAX < MAX2){
        P = MAX;
        MAX = MAX2;
        MAX2 = P;
    }

    while (cin >> P){
        if (P != MAX and P != MAX2) {
            if (MAX2 < P) {
                if (MAX < P) {
                    MAX2 = MAX;
                    MAX = P;
                } else MAX2 = P;
            } else if (MAX == MAX2) MAX2 = P;
        }
    }
    cout << MAX2 << endl;
}
