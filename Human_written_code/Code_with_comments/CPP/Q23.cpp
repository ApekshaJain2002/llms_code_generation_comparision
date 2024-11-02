#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;  // Read input string
    int result = 0, count = 1;  // Initialize result and set initial count to 1

    // Loop through the string starting from the second character
    for (size_t i = 1; i < s.length(); ++i) {
        if (s[i] == s[i - 1]) {
            // If the current character is the same as the previous, increment count
            count += 1;
        } else {
            // When characters differ, add groups of 5 to the result
            result += (count + 4) / 5;
            count = 1;  // Reset count for the new character sequence
        }
    }

    // Account for the last sequence in the string
    result += (count + 4) / 5;
    cout << result << endl;  // Output the final result
    return 0;
}
