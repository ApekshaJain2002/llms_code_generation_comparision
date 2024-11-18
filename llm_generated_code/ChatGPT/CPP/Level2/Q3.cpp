#include <iostream>
#include <vector>
using namespace std;

// Function to check if a given digit is large (i.e., between 5 and 9 inclusive)
bool is_large_digit(int digit) {
    return digit >= 5 && digit <= 9;
}

// Function to check if a number can be split into two large numbers with the same number of digits
bool can_be_sum_of_large_numbers(int x) {
    string x_str = to_string(x);
    int n = x_str.length();

    // Check if x can be represented as the sum of two large integers
    for (int len_x = 1; len_x <= n; ++len_x) {
        bool possible = true;
        int carry = 0;

        for (int i = len_x - 1; i >= 0; --i) {
            int digit_x = (i < x_str.length() ? x_str[i] - '0' : 0) - carry;
            carry = 0;

            if (digit_x < 10 && is_large_digit(5 + digit_x % 10)) {
                continue;
            }
            possible = false;
            break;
        }

        if (possible) {
            return true;
        }
    }

    return false;
}

int main() {
    int t;
    cin >> t;
    vector<string> results;

    for (int i = 0; i < t; ++i) {
        int x;
        cin >> x;
        if (can_be_sum_of_large_numbers(x)) {
            results.push_back("Yes");
        } else {
            results.push_back("No");
        }
    }

    for (const auto& result : results) {
        cout << result << endl;
    }

    return 0;
}
