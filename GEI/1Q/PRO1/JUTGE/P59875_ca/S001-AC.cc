#include <iostream>
using namespace std;
int main() {
    int x, y;
    cin>>x>>y;
    if (x > y) {
        while (y<=x) {
            cout<<x<<endl;
            --x;
        }    
    }else {
        while (x<=y) {
            cout<<y<<endl;
            --y;
        }
    }
}