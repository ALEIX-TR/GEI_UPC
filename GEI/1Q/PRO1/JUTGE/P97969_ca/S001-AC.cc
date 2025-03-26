#include <iostream>
using namespace std;

int main() {
    char L;
    cin >> L;
    int AS = 0;
    while (L != '.'){
        if (L == 'a') ++AS;
        cin >> L;
    }
    cout << AS << endl;
}