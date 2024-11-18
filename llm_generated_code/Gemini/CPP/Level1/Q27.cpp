#include <iostream>
#include <vector>

using namespace std;

struct Force {
    double x, y, z;
};

bool isEquilibrium(vector<Force> &forces) {
    double sumX = 0, sumY = 0, sumZ = 0;
    for (const Force &force : forces) {
        sumX += force.x;
        sumY += force.y;
        sumZ += force.z;
    }

    return abs(sumX) < 1e-9 && abs(sumY) < 1e-9 && abs(sumZ) < 1e-9;
}

int main() {
    int n;
    cin >> n;

    vector<Force> forces(n);
    for (int i = 0; i < n; i++) {
        cin >> forces[i].x >> forces[i].y >> forces[i].z;
    }

    if (isEquilibrium(forces)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
