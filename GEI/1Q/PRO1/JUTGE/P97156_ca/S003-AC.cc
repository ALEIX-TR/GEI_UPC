#include <iostream>
using namespace std;
int main() {
    int x, y;
    cin>>x>>y;
    if (x <= y) {
        cout<<x;
        ++x;
        while (x<=y) {
            cout<<','<<x;
            ++x;
        }
    }
    cout<<endl;
}