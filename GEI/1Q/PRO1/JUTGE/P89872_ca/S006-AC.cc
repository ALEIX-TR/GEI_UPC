//

#include <iostream>
using namespace std;

int main() {
    string MAX = "", MAX2 = "", ACT;
    while (cin >> ACT){
        if (ACT != MAX and ACT != MAX2) {
            if (MAX2 < ACT) {
                if (MAX < ACT) {
                    MAX2 = MAX;
                    MAX = ACT;
                } else MAX2 = ACT;
            } else if (MAX == MAX2) MAX2 = ACT;
        }
    }
    cout << MAX2 << endl;
}
