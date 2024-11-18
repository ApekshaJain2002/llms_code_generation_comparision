#include <iostream>
#include <unordered_map>
#include <vector>

int main() {
    std::vector<int> arr = {1, 2, 2, 3, 3, 3, 4, 4, 4, 4};
    std::unordered_map<int, int> frequency;

    for (int num : arr) {
        frequency[num]++;
    }

    for (const auto& entry : frequency) {
        std::cout << entry.first << " occurs " << entry.second << " times\n";
    }

    return 0;
}
