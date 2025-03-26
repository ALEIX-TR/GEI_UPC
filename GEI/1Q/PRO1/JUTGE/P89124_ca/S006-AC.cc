#include <iostream>
using namespace std;

bool EsPrimer(int n, int divisor) {
    bool noes_divisible;
    if (n <= 1) noes_divisible = false;
    else if (divisor*divisor > n) noes_divisible = true;
    else if (n % divisor == 0 and n != divisor) noes_divisible = false;
    else noes_divisible = EsPrimer(n, ++divisor);
    return noes_divisible;
}

int main() {
    int N;
    while (cin >> N){
        if (EsPrimer(N,2)) cout << N << " es primer" << endl;
        else cout << N << " no es primer" << endl;
    }

}
