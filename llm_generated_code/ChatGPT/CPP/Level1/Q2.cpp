#include <iostream>
#include <vector>
using namespace std;

void moveZerosToEnd(vector<int>& arr) {
    int n = arr.size();
    int j = 0; // Pointer for the position of the next non-zero element

    // Move all non-zero elements to the front
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            arr[j] = arr[i];
            j++;
        }
    }

    // Fill the remaining positions with zeros
    for (int i = j; i < n; i++) {
        arr[i] = 0;
    }
}

int main() {
    vector<int> arr = {0, 1, 0, 3, 12}; // Example array
    moveZerosToEnd(arr);

    cout << "Array after moving zeros to the end: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}

