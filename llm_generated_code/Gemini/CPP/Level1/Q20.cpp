#include <iostream>

using namespace std;

double myPow(double x, int n) {
    if (n == 0) {
        return 1.0;
    }

    if (n < 0) {
        return 1.0 / myPow(x, -n);
    }

    double result = 1.0;
    double currentProduct = x;

    while (n > 0) {
        if (n % 2 == 1) {
            result *= currentProduct;
        }
        currentProduct *= currentProduct;
        n /= 2;
    }

    return result;
}

int main() {
    double x = 2.0;
    int n = 10;
    double result = myPow(x, n);
    cout << "x^n = " << result << endl;
    return 0;
}