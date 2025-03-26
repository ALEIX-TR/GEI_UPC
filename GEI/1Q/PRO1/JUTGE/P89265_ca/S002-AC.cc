#include <iostream>
using namespace std;
int main() {
    int a1, b1, a2, b2;
    cin >> a1 >> b1 >> a2 >> b2;
    if (a1 == a2 and b1 == b2)cout<<"= , ["<<a1<<','<<b1<<']'<<endl;
    else if (a1 <= a2 and b1 >= b2)cout<<"2 , ["<<a2<<','<<b2<<']'<<endl;
    else if (a1 >= a2 and b1 <= b2)cout<<"1 , ["<<a1<<','<<b1<<']'<<endl;
    else {
        cout<<"? , [";
        int s, e;
        if (a1>a2)s=a1;
        else s=a2;
        if (b1>b2)e=b2;
        else e=b1;
        if (s>e)cout<<']'<<endl;
        else cout<<s<<','<<e<<']'<<endl;
    }      
}