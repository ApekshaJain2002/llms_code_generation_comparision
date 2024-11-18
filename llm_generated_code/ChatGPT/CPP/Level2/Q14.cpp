#include <iostream>
using namespace std;

long long factorial(int num) {
    long long result = 1;
    for (int i = 1; i <= num; ++i) {
        result *= i;
    }
    return result;
}

long long uniquePaths(int m, int n) {
    return factorial(m + n - 2) / (factorial(m - 1) * factorial(n - 1));
}

int main() {
    int m = 3, n = 3;
    cout << uniquePaths(m, n) << endl;
    return 0;
}
