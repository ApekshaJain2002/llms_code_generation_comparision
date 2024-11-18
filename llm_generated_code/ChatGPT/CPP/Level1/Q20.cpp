#include <iostream>

double myPow(double x, int n) {
    double result = 1.0;
    long long power = n;
    if (power < 0) {
        x = 1 / x;
        power = -power;
    }
    while (power) {
        if (power % 2 != 0) {
            result *= x;
        }
        x *= x;
        power /= 2;
    }
    return result;
}

int main() {
    double x = 2.0;
    int n = 10;
    std::cout << "Result: " << myPow(x, n) << std::endl;
    return 0;
}
