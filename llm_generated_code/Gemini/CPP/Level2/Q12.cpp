#include <iostream>

using namespace std;

int climbStairs(int n) {
    if (n <= 2) {
        return n;
    }

    int first = 1, second = 2;
    int third;

    for (int i = 3; i <= n; i++) {
        third = first + second;
        first = second;
        second = third;
    }

    return third;
}

int main() {
    int n = 4; // Number of stairs
    int ways = climbStairs(n);
    cout << "Number of ways to climb " << n << " stairs: " << ways << endl;

    return 0;
}
