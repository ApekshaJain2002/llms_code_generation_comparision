#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Meeting {
  int start;
  int end;
};

bool compareMeetings(const Meeting& m1, const Meeting& m2) {
  return m1.end < m2.end;
}

int findMaxMeetings(const vector<int>& start, const vector<int>& end) {
  int n = start.size();
  if (n == 0) {
    return 0;
  }

  vector<Meeting> meetings(n);
  for (int i = 0; i < n; ++i) {
    meetings[i] = {start[i], end[i]};
  }

  sort(meetings.begin(), meetings.end(), compareMeetings);

  int count = 1;
  int lastMeetingEnd = meetings[0].end;

  for (int i = 1; i < n; ++i) {
    if (meetings[i].start >= lastMeetingEnd) {
      count++;
      lastMeetingEnd = meetings[i].end;
    }
  }

  return count;
}

int main() {
  vector<int> start = {1, 0, 3, 5, 8, 5};
  vector<int> end = {2, 1, 7, 9, 10, 7};

  int maxMeetings = findMaxMeetings(start, end);
  cout << "Maximum number of meetings: " << maxMeetings << endl;

  return 0;
}
