#include <iostream>
#include <typeinfo>
using namespace std;

struct Rellotge {
  int h;      // hores (0<=h<24)
  int m;      // minuts (0<=m<60)
  int s;      // segons (0<=s<60)
};

Rellotge mitja_nit() {
  Rellotge MitN;
  MitN.h = 0;
  MitN.m = 0;
  MitN.s = 0;
  return MitN;
}
void incrementa(Rellotge& r) {
  ++r.s;
  if (r.s >= 60) {
    r.s=0;
    ++r.m;
    if (r.m >= 60) {
      r.m=0;
      ++r.h;
      if (r.h >= 24) r = mitja_nit();
    }
  }
  
}
void escriu(const Rellotge& r) {
  cout << r.h/10 << r.h%10 <<':'<< r.m/10 << r.m%10 <<':'<< r.s/10 << r.s%10;
  cout << endl;
}

int main()
{
    Rellotge r = mitja_nit();
    char B;
    while (cin >> B) {
        escriu(r);
        incrementa(r);
    }
    return 0;
}
