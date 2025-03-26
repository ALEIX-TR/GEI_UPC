#include <iostream>
using namespace std;

int main() {
    int K, N, M;
    cin >> K >> N >> M;
    while(K > 0){
        int ELE = 9,F = N;
        while(F > 0){
            int C = M;
            while(C > 0){
                cout << ELE;
                --ELE;
                if(ELE < 0) ELE = 9;
                --C;
            }
            cout << endl;
            --F;
        }
        --K;
        if (K != 0) cout << endl;
    }
}