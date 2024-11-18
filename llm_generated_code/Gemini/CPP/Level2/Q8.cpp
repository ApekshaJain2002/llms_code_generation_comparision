#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compareIntervals(const pair<int, int>& a, const pair<int, int>& b) {
    return a.second < b.second;
}

int maxMeetings(vector<int>& start, vector<int>& end) {
    int n = start.size();
    vector<pair<int, int>> meetings;
    for (int i = 0; i < n; i++) {
        meetings.push_back({start[i], end[i]});
    }

    // Sort meetings by their end times
    sort(meetings.begin(), meetings.end(), compareIntervals);

    // Time complexity: O(n log n) for sorting, O(n) for iteration
    // Space complexity: O(n) for the meetings vector
    // Lines of code: 17
    // Cyclomatic complexity: 2
    int count = 1;
    int prevEnd = meetings[0].second;
    for (int i = 1; i < n; i++) {
        if (meetings[i].first >= prevEnd) {
            count++;
            prevEnd = meetings[i].second;
        }
    }

    return count;
}

int main() {
    vector<int> start = {1, 3, 0, 5, 8, 5};
    vector<int> end = {2, 4, 6, 7, 9, 9};
    int maxMeetingsPossible = maxMeetings(start, end);
    cout << "Maximum number of meetings: " << maxMeetingsPossible << endl;

    return 0;
}
