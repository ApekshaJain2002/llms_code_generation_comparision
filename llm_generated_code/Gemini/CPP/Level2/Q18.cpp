#include <iostream>
#include <vector>

using namespace std;

int longestStreak(const vector<int>& spells) {
    int n = spells.size();
    int maxStreak = 0, currentStreak = 0;

    for (int i = 0; i < n; i++) {
        if (spells[i] == 1) {
            currentStreak++;
            maxStreak = max(maxStreak, currentStreak);
        } else {
            currentStreak = 0;
        }
    }

    return maxStreak;
}

int main() {
    vector<int> spells = {1, 0, 1, 1, 0, 1, 1, 1};
    int maxStreak = longestStreak(spells);
    cout << "Longest streak of successful spells: " << maxStreak << endl;
    return 0;
}

