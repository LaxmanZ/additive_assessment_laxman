#include <iostream>
using namespace std;

const int MAX = 100;

int main() {
    int n;
    int A[MAX][MAX], B[MAX][MAX], C[MAX][MAX];

    cout << "Enter size of matrix (n): ";
    cin >> n;

    cout << "Enter elements of Matrix A (" << n << "x" << n << "):\n";
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            cin >> A[i][j];

    cout << "Enter elements of Matrix B (" << n << "x" << n << "):\n";
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            cin >> B[i][j];

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            C[i][j] = 0;
            for (int k = 0; k < n; ++k) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    cout << "Resultant Matrix (A x B):\n";
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
