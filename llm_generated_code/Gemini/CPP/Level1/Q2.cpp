#include <iostream>
#include <vector>

using namespace std;

void moveZerosToEnd(vector<int>& arr) {
    int n = arr.size();
    int j = 0; // Pointer to the next position to fill with non-zero element

    for (int i = 0; i < n; ++i) {
        if (arr[i] != 0) {
            swap(arr[i], arr[j]);
            j++;
        }
    }
}

int main() {
    vector<int> arr = {0, 1, 0, 3, 12};

    moveZerosToEnd(arr);

    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
