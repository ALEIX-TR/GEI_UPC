#include <iostream>
#include <vector>
using namespace std;

vector<bool> Garbell(int n) {
	vector<bool> v(n + 1, true);
    v[0] = v[1] = false;
    int d = 2;
    while (d <= n) {
        if (v[d]) {
            int dd = d * 2;
            while (dd <= n) {
                v[dd] = false;
                dd += d;
            }
        }
        ++d;
    }
	return v;
}

int main() {
	int n;
	vector<bool> v = Garbell(1000000);
	while (cin >> n) {
		if (v[n]) cout << n << " es primer" << endl;
		else cout << n << " no es primer" << endl;
	}
}
