#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    if (T < 10) cout << "fa fred" << endl;
    else {
        if (T > 30) cout << "fa calor" << endl;
        else cout << "s'esta be" << endl;
    }
    if (T >= 100) cout << "l'aigua bulliria" << endl;
    else {
        if (T <= 0) cout << "l'aigua es gelaria" << endl;
    }
}