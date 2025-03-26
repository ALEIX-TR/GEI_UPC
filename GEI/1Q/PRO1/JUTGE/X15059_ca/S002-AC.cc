#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    bool Creix = true;
    while (N > 0 and Creix){
        double X1,X0;
        cin >> X0;
        while (X0 != -1 and Creix){
            cin >> X1;
            if (X1 != -1){
                if (X1 >= X0) X0 = X1;
                else Creix = false;
            }else X0 = X1;
        }
        --N;
    }
    if (Creix) cout << "Si" << endl;
    else cout << "No" << endl;
}