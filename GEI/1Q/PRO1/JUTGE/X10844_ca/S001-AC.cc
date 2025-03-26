#include <map>
#include <iostream>
using namespace std;

int main() {
    string fruita;
    map<string,int> Fruites;
    while (cin >> fruita) {
        int Q;
        cin >> Q;
        auto it = Fruites.find(fruita);
        if (it == Fruites.end()) Fruites[fruita] = Q;
        else Fruites[fruita] += Q;
    }
    auto it = Fruites.begin();
    auto it2 = Fruites.end();
    while (it != it2) {
        cout << it->first << ' ' << it->second << endl;
        ++it;
    }
}
