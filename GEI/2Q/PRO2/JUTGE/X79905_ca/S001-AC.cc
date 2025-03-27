#include <map>
#include <iostream>
using namespace std;

int main() {
    char codi;
    string paraula;
    map<string,int> frekuencies;
    while (cin >> codi >> paraula) {
        auto it = frekuencies.find(paraula);
        if (codi == 'a') {
            if (it == frekuencies.end()) frekuencies[paraula] = 1;
            else ++it->second;
        }else if (codi == 'f') {
            if (it == frekuencies.end()) cout << 0;
            else cout << it->second;
            cout << endl;
        }else if (codi == 'e' and it != frekuencies.end()) {
            if (it->second <= 1) it->second = 0;
            else --it->second;
        }
    }
}
