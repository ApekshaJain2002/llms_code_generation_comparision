#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Lamp {
    int a, b;
};

bool compareByPoints(const Lamp &l1, const Lamp &l2) {
    return l1.b > l2.b;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        
        vector<Lamp> lamps(n);
        for (int i = 0; i < n; i++) {
            cin >> lamps[i].a >> lamps[i].b;
        }
        
        sort(lamps.begin(), lamps.end(), compareByPoints);
        
        int points = 0;
        int turnedOnCount = 0;

        for (int i = 0; i < n; i++) {
            if (lamps[i].a > turnedOnCount) {
                points += lamps[i].b;
                turnedOnCount++;
            }
        }
        
        cout << points << endl;
    }

    return 0;
}
