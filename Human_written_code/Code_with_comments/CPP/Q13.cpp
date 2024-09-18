#include <bits/stdc++.h>
using namespace std;

long long int solve(vector<int>& arr) {
    int n = arr.size();
    long long int prev = arr[0]; // Stores the max sum including the previous house
    long long int prev2 = 0;     // Stores the max sum excluding the previous house

    for (int i = 1; i < n; i++) {
        long long int pick = arr[i]; 
        if (i > 1) pick += prev2;  // Add current house value if the gap is more than 1 house
        long long int nonPick = prev; // Max sum if current house is not picked

        long long int cur_i = max(pick, nonPick); // Take the maximum of picking or not picking the current house
        prev2 = prev;  // Update prev2 to prev for the next iteration
        prev = cur_i;  // Update prev to cur_i for the next iteration
    }
    return prev;  // Final result
}

long long int robStreet(int n, vector<int>& arr) {
    vector<int> arr1, arr2;

    if (n == 1) return arr[0]; // If only one house, return its value

    // Prepare two cases: robbing from the second house and robbing until the second last house
    for (int i = 0; i < n; i++) {
        if (i != 0) arr1.push_back(arr[i]);      // Exclude the first house
        if (i != n - 1) arr2.push_back(arr[i]);  // Exclude the last house
    }

    // Get the maximum profit from both cases
    long long int ans1 = solve(arr1);
    long long int ans2 = solve(arr2);

    return max(ans1, ans2);  // Return the maximum of both cases
}

int main() {
    vector<int> arr {1, 5, 1, 2, 6};
    int n = arr.size();
    cout << robStreet(n, arr);  // Output the result of the maximum robbery profit
}
