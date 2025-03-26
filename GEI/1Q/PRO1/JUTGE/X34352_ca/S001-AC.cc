#include <map>
#include <iostream>
#include <sstream>
using namespace std;

int main() {
    char codi;
    map<string,int> frekuencies;
    while (cin >> codi) {
        string paraula;
        if (codi == 'a') {
            cin >> paraula;
            auto it = frekuencies.find(paraula);
            if (it == frekuencies.end()) frekuencies[paraula] = 1;
            else ++frekuencies[paraula];
        }
        if (codi == 'f') {
            cin >> paraula;
            auto it = frekuencies.find(paraula);
            if (it == frekuencies.end()) cout << 0;
            else cout << frekuencies[paraula];
            cout << endl;
        }
    }
}
