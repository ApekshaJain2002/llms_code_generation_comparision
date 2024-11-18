#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> treasures = {1, 2, 3, 5};
    int N = 5;
    int expected_sum = N * (N + 1) / 2;
    int actual_sum = 0;

    for (int treasure : treasures) {
        actual_sum += treasure;
    }

    int missing_treasure = expected_sum - actual_sum;

    cout << "Missing treasure: " << missing_treasure << endl;

    return 0;
}