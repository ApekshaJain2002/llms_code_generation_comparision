#include <iostream>
#include <vector>

int main() {
    int N = 5;
    std::vector<int> arr = {1, 2, 3, 5};
    int total_sum = N * (N + 1) / 2;
    int sum = 0;

    for (int num : arr) {
        sum += num;
    }

    int missing_number = total_sum - sum;
    std::cout << "Missing number: " << missing_number << std::endl;

    return 0;
}
