#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> arr = {1, 1, 0, 1, 1, 1};
    int max_count = 0, curr_count = 0;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == 1) {
            curr_count++;
            max_count = max(max_count, curr_count);
        } else {
            curr_count = 0;
        }
    }

    cout << max_count << endl;

    return 0;
}