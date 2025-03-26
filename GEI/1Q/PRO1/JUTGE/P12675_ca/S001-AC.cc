//Elements comuns
//Digues kuants elements komuns tenen dos vektors
//Intput: Dos vectors ordenats kreixentment
//Ouput: Elements en komu
#include <iostream>
#include <vector>
using namespace std;

/*
 Pre: Dos vektors
 Post: Els seus elements komuns
 */

int elements_comuns(const vector<int>& X, const vector<int>& Y) {
    int Elements = 0, PosicioX = 0, PosicioY = 0;
    while (PosicioX != X.size() and PosicioY != Y.size()) {
        if (X[PosicioX] == Y[PosicioY]) {
            ++Elements;
            ++PosicioX;
            ++PosicioY;
        }else if (X[PosicioX] > Y[PosicioY]) ++PosicioY;
        else ++PosicioX;
    }
    return Elements;
}

int main()
{
    int n, m;
    while (cin >> m >> n) {

        vector<int> X(m);
        for (int i = 0; i < m; ++i)
            cin >> X[i];

        vector<int> Y(n);
        for (int i = 0; i < n; ++i)
            cin >> Y[i];

        cout << elements_comuns(X, Y) << endl;
    }
    return 0;
}
