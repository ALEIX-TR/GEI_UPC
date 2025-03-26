//Donats tres nombres diferents, escriure el que no es ni maxim ni minim
//Input: Sekuencia de kasos
//Output: un valor per kada kas
#include <iostream>
using namespace std;

int main() {
    int N1, N2, N3;

    while (cin >> N1 >> N2 >> N3){
        int MAX = N1;
        if (MAX < N2) MAX = N2;
        if (MAX < N3) MAX = N3;
        
        int MIN = N1;
        if (MIN > N2) MIN = N2;
        if (MIN > N3) MIN = N3;

        if (MIN == N1 or MAX == N1){
            if (MIN == N2 or MAX == N2) cout << N3 << endl;
            else cout << N2 << endl;
        }else cout << N1 << endl;
    }
}