#include <iostream>
#include <vector>

int main() {
    std::vector<int> arr = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int max_sum = arr[0], current_sum = arr[0];
    int start = 0, end = 0, temp_start = 0;

    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] > current_sum + arr[i]) {
            current_sum = arr[i];
            temp_start = i;
        } else {
            current_sum += arr[i];
        }

        if (current_sum > max_sum) {
            max_sum = current_sum;
            start = temp_start;
            end = i;
        }
    }

    std::cout << "Maximum sum: " << max_sum << std::endl;
    std::cout << "Subarray: ";
    for (int i = start; i <= end; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
