#include <iostream>
using namespace std;
int main() {
    int H, M, S;
    cin >> H >> M >> S;
    S = (H * 3600 + M * 60) + S + 1;
    H = (S / 3600);
    M = (S % 3600) / 60;
    S = S - (M * 60 + H * 3600);
    H = H - ( H / 24) * 24;
    cout << H / 10 << H % 10 << ':' << M / 10 << M % 10 << ':'
         << S / 10 << S % 10 << endl;
}
