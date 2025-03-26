#include <map>
#include <iostream>
#include <sstream>
using namespace std;

int main() {
    map<string, string> DIC;
    string aux;
    getline(cin,aux);
    while (!aux.empty()) {
        istringstream linea_input(aux);
        string Ichi, Ni;
        linea_input >> Ichi >> Ni;
        DIC.insert({Ichi, Ni});
        getline(cin,aux);
    }
    while(cin >> aux) {
        auto it = DIC.find(aux);
        if (it == DIC.end()) cout << "<not found>";
        else cout << DIC.find(aux)->second;
        cout << endl;
    }
}
