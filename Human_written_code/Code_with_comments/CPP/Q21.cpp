#include <iostream>
using namespace std;

int main() {
    string s;         // Declare a string variable to store the input
    int flag = 1;     // Initialize a flag to track when to print spaces
    cin >> s;         // Read the input string

    // Iterate through each character in the string
    for (int i = 0; i < s.size(); i++) {
        // Check if the current character and the next two form "WUB"
        if (s[i] == 'W' && s[i+1] == 'U' && s[i+2] == 'B') {
            i += 2; // Skip over the "WUB" substring by incrementing 'i' by 2
            if (!flag) { // If flag is 0, it means we encountered a non-"WUB" part earlier
                cout << " "; // Print a space to separate words
            }
            continue; // Continue to the next iteration without printing "WUB"
        } else {
            flag = 0; // Set flag to 0 once we encounter a character other than "WUB"
            cout << s[i]; // Print the character as part of the original message
        }
    }

    return 0;
}
