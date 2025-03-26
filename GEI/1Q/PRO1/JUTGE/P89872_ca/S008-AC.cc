//

#include <iostream>
using namespace std;

int main() {
    string MAX = "", MAX2 = "", ACT;
    while (cin >> ACT){
        if(ACT > MAX){
            MAX2 = MAX;
            MAX = ACT;
        }else if (ACT > MAX2 and ACT != MAX) MAX2 = ACT;
    }
    cout << MAX2 << endl;
}
