#include <iostream>
#include <vector>
using namespace std;

typedef vector<int> row;
typedef vector<row> Matrix;


Matrix product(const Matrix& a, const Matrix& b) {
    int n = a.size();
    Matrix c(n, row(n, 0));

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            int sum = 0;

            for (int k = 0; k < n; ++k) {
                sum += a[i][k] * b[k][j];
            }

            c[i][j] = sum;
        }
    }

    return c;
}

int main()
{
    int n;
    while (cin >> n) {
        Matrix A(n, vector<int>(n));
        Matrix B(n, vector<int>(n));
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                cin >> A[i][j];
            }
        }
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                cin >> B[i][j];
            }
        }
        Matrix C = product(A, B);
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                cout << C[i][j] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}
