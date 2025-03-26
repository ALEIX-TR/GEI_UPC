#include <iostream>
using namespace std;

int factorial(int n){
    int FACT = 1;
    while (n > 0){
        FACT *= n;
        --n;
    }
    return FACT;
}

int main()
{
    int x;
    while (cin >> x) {
        cout << factorial(x) << endl;
    }
    return 0;
}
