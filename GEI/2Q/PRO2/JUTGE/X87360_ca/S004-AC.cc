#include <iostream>
#include <list>
using namespace std;

void inter(list<int>& uno, const list<int>& dos) {
    list<int>::iterator U = uno.begin();
    list<int>::const_iterator Ni = dos.begin();
    while (U != uno.end() and Ni != dos.end()) {
        if (*U < *Ni) {
            U = uno.erase(U); //Borra i Avança
        }else if (*Ni < *U) {
            Ni++;
        }else{
            ++U;
            ++Ni;
        }
    }
    //borrar final del u
    while (U != uno.end()) U = uno.erase(U);
}
