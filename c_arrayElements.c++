#include <iostream>
using namespace std;

int trapWater(int height[], int n) {
    int leftMax[n], rightMax[n];
    int water = 0;

    leftMax[0] = height[0];
    for (int i = 1; i < n; ++i)
        leftMax[i] = max(height[i], leftMax[i - 1]);

    rightMax[n - 1] = height[n - 1];
    for (int i = n - 2; i >= 0; --i)
        rightMax[i] = max(height[i], rightMax[i + 1]);

    for (int i = 0; i < n; ++i)
        water += min(leftMax[i], rightMax[i]) - height[i];

    return water;
}

int main() {
    int height[] = {2, 1, 3, 0, 1, 2, 3};
    int n = sizeof(height) / sizeof(height[0]);
    cout << "Trapped water: " << trapWater(height, n) << " units\n";
    return 0;
}
