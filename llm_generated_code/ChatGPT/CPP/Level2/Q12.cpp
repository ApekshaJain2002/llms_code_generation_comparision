#include <iostream>
#include <vector>
using namespace std;

int countWaysToClimb(int n) {
    if (n == 0) return 1;  // There's one way to stay at the ground level
    if (n == 1) return 1;  // Only one way to reach the first stair

    vector<int> ways(n + 1, 0);
    ways[0] = 1;
    ways[1] = 1;

    for (int i = 2; i <= n; i++) {
        ways[i] = ways[i - 1] + ways[i - 2];  // Ways to reach the ith stair
    }

    return ways[n];
}

int main() {
    int stairs = 4;  // Example for 4 stairs

    int result = countWaysToClimb(stairs);

    cout << "Number of ways to reach the top of " << stairs << " stairs: " << result << endl;

    return 0;
}

