//Nombres harmònics 2
//Fer loperacio Hn-Hm
//input: Un llistat de parelles de nombres
//output: Un llistat de resultats
#include <iostream>
using namespace std;

int main() {
    cout.setf(ios::fixed);
    cout.precision(10);

    double N, M;
    while (cin >> N >> M){
        double Har = 0;
        while (N > M) {
            Har = Har + 1/N;
            --N;
        }
        cout << Har << endl;
    }

}
