#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Meeting {
    int start, end, index;
};

bool compare(Meeting m1, Meeting m2) {
    return m1.end < m2.end;  // Sort by end time
}

void maximizeMeetings(vector<int>& start, vector<int>& end) {
    int n = start.size();
    vector<Meeting> meetings;

    // Store meeting details with index
    for (int i = 0; i < n; i++) {
        meetings.push_back({start[i], end[i], i + 1});
    }

    // Sort meetings based on end times
    sort(meetings.begin(), meetings.end(), compare);

    // Select meetings
    vector<int> selectedMeetings;
    int lastEnd = 0;

    for (const auto& meeting : meetings) {
        if (meeting.start >= lastEnd) {  // If the meeting doesn't overlap
            selectedMeetings.push_back(meeting.index);
            lastEnd = meeting.end;  // Update end time for the last selected meeting
        }
    }

    // Output results
    cout << "Maximum number of meetings: " << selectedMeetings.size() << endl;
    cout << "Order of meetings to maximize usage: ";
    for (int i : selectedMeetings) {
        cout << i << " ";
    }
    cout << endl;
}

int main() {
    vector<int> start = {1, 3, 0, 5, 8, 5};
    vector<int> end = {2, 4, 6, 7, 9, 9};

    maximizeMeetings(start, end);

    return 0;
}

