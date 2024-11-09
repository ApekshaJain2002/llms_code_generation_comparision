#include <iostream>

using namespace std;

struct Vector {
    int x, y, z;
};

int main() {
    int n;
    cin >> n;

    int sumX = 0, sumY = 0, sumZ = 0;

    for (int i = 0; i < n; ++i) {
        Vector v;
        cin >> v.x >> v.y >> v.z;
        sumX += v.x;
        sumY += v.y;
        sumZ += v.z;
    }

    if (sumX == 0 && sumY == 0 && sumZ == 0) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}
