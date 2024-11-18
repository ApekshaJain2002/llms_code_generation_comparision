#include <iostream>
#include <vector>

using namespace std;

struct Force {
    int x, y, z;
};

bool isEquilibrium(const vector<Force>& forces) {
    int sumX = 0, sumY = 0, sumZ = 0;
    for (const auto& force : forces) {
        sumX += force.x;
        sumY += force.y;
        sumZ += force.z;
    }
    return (sumX == 0 && sumY == 0 && sumZ == 0);
}

int main() {
    int n;
    cin >> n;
    vector<Force> forces(n);
    for (int i = 0; i < n; ++i) {
        cin >> forces[i].x >> forces[i].y >> forces[i].z;
    }
    cout << (isEquilibrium(forces) ? "YES" : "NO") << endl;
    return 0;
}
