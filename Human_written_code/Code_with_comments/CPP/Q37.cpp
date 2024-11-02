#include <bits/stdc++.h>
using namespace std;

// Function to check if a string has valid balanced parentheses
bool isValid(string s) {
    stack<char> st;

    // Iterate through each character in the string
    for (auto it : s) {
        // Push opening brackets onto the stack
        if (it == '(' || it == '{' || it == '[') 
            st.push(it);
        else {
            // If stack is empty and a closing bracket is encountered, it's invalid
            if (st.empty()) return false;

            char ch = st.top();
            st.pop();

            // Check if the closing bracket matches the top opening bracket
            if ((it == ')' && ch == '(') || (it == ']' && ch == '[') || (it == '}' && ch == '{'))
                continue;
            else
                return false;
        }
    }

    // If the stack is empty, all brackets are matched; otherwise, it's invalid
    return st.empty();
}

int main() {
    string s = "()[{}()]";

    // Output result based on the validity of the string
    if (isValid(s))
        cout << "True" << endl;
    else
        cout << "False" << endl;
}
