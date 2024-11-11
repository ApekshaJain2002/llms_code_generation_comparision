#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Lamp {
    int a, b;
};

bool compare(Lamp x, Lamp y) {
    return x.a < y.a; 
}

int max_points(int n, vector<Lamp>& lamps) {
    sort(lamps.begin(), lamps.end(), compare); 
    int points = 0;
    int lamps_lit = 0;

    for (int i = 0; i < n; ++i) {
        if (lamps_lit < lamps[i].a) {  
            points += lamps[i].b;
            lamps_lit++;
        }
    }

    return points;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<Lamp> lamps(n);
        for (int i = 0; i < n; ++i) {
            cin >> lamps[i].a >> lamps[i].b;
        }
        cout << max_points(n, lamps) << endl;
    }
    return 0;
}
