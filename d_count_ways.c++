#include <iostream>
using namespace std;

int countConsecutiveSumWays(int n) {
    int count = 0;
    for (int k = 1; k * (k - 1) < 2 * n; ++k) {
        int numerator = 2 * n - k * (k - 1);
        if (numerator % (2 * k) == 0) {
            int x = numerator / (2 * k);
            if (x > 0) {
                count++;
            }
        }
    }
    return count - 1;
}

int main() {
    int n = 15;
    cout << "Number of ways to express " << n << " as sum of consecutive natural numbers: ";
    cout << countConsecutiveSumWays(n) << endl;

    return 0;
}
