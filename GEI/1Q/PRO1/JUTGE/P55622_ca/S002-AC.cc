#include <iostream>
using namespace std;
int main() {
    int n,d=1;
    cin>>n;
    cout<<"El nombre de digits de "<<n;
    while(n>9){
        n = n/10;
        ++d;
    }
    cout<<" es "<<d<<'.'<<endl;
}