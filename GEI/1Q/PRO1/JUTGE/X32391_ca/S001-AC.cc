#include <iostream>
using namespace std;

int main() {
    int DF, N, T;
    cin >> DF >> N >> T;
    int SP = 0;
    while (T > 0) {
        int TS;
        cin >> TS;
        N = N + TS - DF;
        if (N > 0){
            ++SP;
        }
        --T;
    }
    cout << SP << endl;
}