#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> values = {3, -2, 5, -1, 4, -3, 2, 1};
    int max_sum = values[0], curr_sum = values[0];

    for (int i = 1; i < values.size(); i++) {
        curr_sum = max(values[i], curr_sum + values[i]);
        max_sum = max(max_sum, curr_sum);
    }

    cout << "Maximum sum: " << max_sum << endl;

    return 0;
}