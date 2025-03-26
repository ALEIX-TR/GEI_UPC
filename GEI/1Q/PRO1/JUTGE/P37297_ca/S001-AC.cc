#include <iostream>
using namespace std;
int main() {
    int N;
    cin >> N;
    cout << N%10+(N/10)%10+(N/100)%10 << endl;
}