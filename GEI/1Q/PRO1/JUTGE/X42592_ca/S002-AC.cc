// Add or remove includes
#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <algorithm>
#include <cmath>

using namespace std;

int TreureNeg(int a) {
  int N = a;
  if (N < 0) N *= -1;
  return N;
}

int findDistance(int d, const vector<int> &v) {
  int Pos = -1, MaxV = v.size(), MinV = 0, MigV;
  bool Trobat = false;
  while (!Trobat and MinV <= MaxV) {
    MigV = MinV + (MaxV - MinV)/2;
    int dist = TreureNeg(v[MigV]-v[MigV+1]);
    if (dist < d) MinV = MigV + 1;
    else if (dist > d) MaxV = MigV - 1;
    else Trobat = true;
  }
  if (Trobat) Pos = MigV;
  return Pos;
}
int main()  {
    vector<int> listds;
    vector<vector<int> > listinputs;
    vector<int> listsolutions;
    vector<int> listattempts;
    int d, n;
    while (cin >> d >> n) {
        listds.push_back(d);
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        listinputs.push_back(v);
        listsolutions.push_back(0);
    }
    int repetitions = max(1, 100000/int(listinputs.size()));
    for (int index = 0; index < int(listinputs.size()); index++)
        for (int i = 0; i < repetitions; i++)
            listattempts.push_back(index);
    random_shuffle(listattempts.begin(), listattempts.end());
    for (int r = 0; r < int(listattempts.size()); r++) {
        int i = listattempts[r];
        listsolutions[i] = findDistance(listds[i], listinputs[i]);
    }
    for (int i = 0; i < int(listsolutions.size()); i++)
        cout << listsolutions[i] << endl;
}
