//Perfect Primes
//funio que determini si es primer perfecte
#include <iostream>
using namespace std;
/*
 Precondicio: n >= 0
 Postcondicio: Suma dels seus digits
 */
int suma_digits(int n) {
    int suma;
    if (n < 10) {
        suma = n;
    }else suma = suma_digits(n / 10) + n % 10;
    return suma;
}

/*
 Precondicio: n >= 0, divisor al ke es vol komprobar
 Postcondicio: si es o no divisible pel divisor
 */
bool es_primer(int n, int divisor){
    bool noes_divisible;
    if (n <= 1) noes_divisible = false;
    else if (divisor*divisor > n) noes_divisible = true;
    else if (n % divisor == 0 and n != divisor) noes_divisible = false;
    else noes_divisible = es_primer(n, ++divisor);
    return noes_divisible;
}

/*
 Precondicio: n >= 0
 Postcondicio: Si compleix o no les condicions de perfecte
 */
bool es_primer_perfecte(int n){
    bool es_primer_perfect;
    if (n < 10) es_primer_perfect = es_primer(n, 2);
    else if (es_primer(n, 2)) {
        es_primer_perfect = es_primer_perfecte(suma_digits(n));
    }else es_primer_perfect = false;
    return es_primer_perfect;
}

int main() {
    int n;
    while (cin >> n) cout << (es_primer_perfecte(n) ? "true" : "false") << endl;
    return 0;    
}
