#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Meeting {
    int start;
    int end;
    int index;
};

bool compare(Meeting m1, Meeting m2) {
    // Sort by end time, and if equal, by index
    if (m1.end == m2.end)
        return m1.index < m2.index;
    return m1.end < m2.end;
}

vector<int> maxMeetings(vector<int>& start, vector<int>& end) {
    int n = start.size();
    vector<Meeting> meetings;

    // Create meeting objects with start, end, and index
    for (int i = 0; i < n; i++) {
        meetings.push_back({start[i], end[i], i + 1});
    }

    // Sort meetings by end time (and by index if end times are equal)
    sort(meetings.begin(), meetings.end(), compare);

    vector<int> result;
    int lastEnd = -1;

    // Select meetings that don't overlap
    for (const auto& m : meetings) {
        if (m.start > lastEnd) {
            result.push_back(m.index);
            lastEnd = m.end;
        }
    }

    return result;
}

int main() {
    vector<int> start = {1, 3, 0, 5, 8, 5};
    vector<int> end = {2, 4, 6, 7, 9, 9};

    vector<int> order = maxMeetings(start, end);

    cout << "Maximum number of meetings that can be accommodated: " << order.size() << endl;
    cout << "Order of meetings: ";
    for (int i : order) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}

