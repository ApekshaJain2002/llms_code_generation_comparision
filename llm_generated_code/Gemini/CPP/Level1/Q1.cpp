#include <iostream>
#include <vector>

using namespace std;

int findLargestElement(const vector<int>& arr) {
    if (arr.empty()) {
        return -1; // Handle empty array case
    }

    int largest = arr[0];
    for (int i = 1; i < arr.size(); ++i) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    return largest;
}

int main() {
    vector<int> arr = {10, 5, 20, 8, 15};
    int largestElement = findLargestElement(arr);

    if (largestElement != -1) {
        cout << "Largest element: " << largestElement << endl;
    } else {
        cout << "Array is empty" << endl;
    }

    return 0;
}
