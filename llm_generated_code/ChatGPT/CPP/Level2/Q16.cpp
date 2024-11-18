#include <iostream>
#include <vector>
using namespace std;

int findMissingTreasure(int N, const vector<int>& treasures) {
    int expectedSum = N * (N + 1) / 2;
    int actualSum = 0;
    for (int treasure : treasures) {
        actualSum += treasure;
    }
    return expectedSum - actualSum;
}

int main() {
    int N = 5;
    vector<int> treasures = {1, 2, 3, 5};
    cout << "Missing treasure: " << findMissingTreasure(N, treasures) << endl;
    return 0;
}
