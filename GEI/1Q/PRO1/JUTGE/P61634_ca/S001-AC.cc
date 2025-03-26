#include <iostream>
using namespace std;

int main() {
    int ANY;
    cin >> ANY;

    if (ANY % 4 != 0) cout << "NO" << endl;
    else if ( ( ANY / 100 ) % 4 != 0 and ANY % 100 == 0) cout << "NO" << endl;
    else cout << "YES" << endl; 
}