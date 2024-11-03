#include <iostream>
using namespace std;

int climbStairs(int N) {
    if (N <= 1) return 1;

    int prev2 = 1; // ways(0)
    int prev1 = 1; // ways(1)
    int current;

    for (int i = 2; i <= N; i++) {
        current = prev1 + prev2; // ways(i) = ways(i-1) + ways(i-2)
        prev2 = prev1;
        prev1 = current;
    }

    return current;
}

int main() {
    int N = 5; // Example: Number of stairs
    cout << "Total number of distinct ways to reach the " << N << "th stair: " << climbStairs(N) << endl;
    return 0;
}

