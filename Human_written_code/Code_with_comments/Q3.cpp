#include <bits/stdc++.h>
using namespace std;

// Sort an array of 0s, 1s, and 2s
void sortArray(vector<int>& arr, int n) {
    int low = 0, mid = 0, high = n - 1;

    while (mid <= high) {
        if (arr[mid] == 0) {
            swap(arr[low], arr[mid]); // Move 0s to the beginning
            low++;
            mid++;
        }
        else if (arr[mid] == 1) {
            mid++; // Skip 1s as they're already in place
        }
        else {
            swap(arr[mid], arr[high]); // Move 2s to the end
            high--;
        }
    }
}

int main() {
    vector<int> arr = {0, 2, 1, 2, 0, 1};
    sortArray(arr, arr.size());

    cout << "After sorting:" << endl;
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
