#include <iostream>
#include <math.h>
using namespace std;

int main() {
    cout.setf(ios::fixed);
    cout.precision(6);
    int V;
    cin >> V;
    while (V > 0) {
        string F;
        cin >> F;
        if (F == "rectangle"){
            double B, H;
            cin >> B >> H;
            cout << B * H << endl;
        }else {
            double R;
            cin >> R;
            cout << R * R * M_PI << endl;
        }
        --V;
    }
}
