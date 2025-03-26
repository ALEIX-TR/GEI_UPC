#include <iostream>
using namespace std;
int main() {
    int Files;
    cin >> Files;
    while (Files > 0) {
        int NFix, N;
        cin >> NFix;
        N = NFix -1;
        double NL;
        cin >> NL;
        double MIN = NL, MAX = NL, MIT = NL;
        while(N > 0){
            cin >> NL;
            if (NL >= MAX) MAX = NL;
            if (NL <= MIN) MIN = NL;
            MIT = MIT + NL;
            --N;
        }
        cout.setf(ios::fixed);
        cout.precision(4);
        cout << MIN << ' ' << MAX << ' ' << MIT / NFix << endl;
        --Files;
    }
}
