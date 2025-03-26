#include <iostream>
#include <vector>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector <int> L(N);
  int n = N;
  while (n > 0){
    int x;
    cin >> x;
    L[n - 1] = x;
    --n;
  }
  int Iguals = 0;
  while (N > 1){
    if (L[0] == L[N - 1]) ++Iguals;
    --N;
  }
  cout << Iguals << endl;
  
}
