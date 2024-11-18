#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

void countOccurrences(const vector<int>& arr) {
    unordered_map<int, int> freq;
    for (int num : arr) {
        freq[num]++;
    }

    for (const auto& pair : freq) {
        cout << pair.first << " occurs " << pair.second << " times\n";
    }
}

int main() {
    vector<int> arr = {1, 2, 3, 2, 1, 4, 5, 2};
    countOccurrences(arr);
    return 0;
}