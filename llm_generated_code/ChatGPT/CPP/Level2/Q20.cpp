#include <iostream>
#include <cmath>
using namespace std;

double calculatePotionStrength(double x, int n) {
    return pow(x, n);
}

int main() {
    double x = 2.5;
    int n = 3;
    cout << "Potion Strength: " << calculatePotionStrength(x, n) << endl;
    return 0;
}
