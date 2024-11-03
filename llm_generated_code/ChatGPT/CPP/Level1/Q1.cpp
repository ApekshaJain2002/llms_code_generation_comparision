#include <iostream>
#include <vector>
using namespace std;

int findLargest(const vector<int>& arr) {
    int largest = arr[0];
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }
    return largest;
}

int main() {
    vector<int> arr = {10, 20, 5, 30, 15}; // Example array
    int largestElement = findLargest(arr);
    cout << "The largest element in the array is: " << largestElement << endl;
    return 0;
}
