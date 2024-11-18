#include <vector>
#include <algorithm>
using namespace std;

int longestSuccessStreak(vector<int>& spells) {
    int maxStreak = 0, currentStreak = 0;
    for (int spell : spells) {
        if (spell == 1) {
            currentStreak++;
            maxStreak = max(maxStreak, currentStreak);
        } else {
            currentStreak = 0;
        }
    }
    return maxStreak;
}
