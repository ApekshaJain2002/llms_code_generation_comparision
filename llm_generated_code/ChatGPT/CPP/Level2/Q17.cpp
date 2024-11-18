#include <iostream>
#include <vector>
using namespace std;

int maxTreasureValue(const vector<int>& treasures) {
    int maxSum = treasures[0];
    int currentSum = treasures[0];

    for (size_t i = 1; i < treasures.size(); ++i) {
        currentSum = max(treasures[i], currentSum + treasures[i]);
        maxSum = max(maxSum, currentSum);
    }

    return maxSum;
}

int main() {
    vector<int> treasures = {3, -2, 5, -1, 4, -3, 2, 1};
    cout << "Maximum treasure value: " << maxTreasureValue(treasures) << endl;
    return 0;
}
