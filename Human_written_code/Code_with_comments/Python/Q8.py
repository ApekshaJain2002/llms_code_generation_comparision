from typing import List

class Meeting:
    def __init__(self, start: int, end: int, pos: int):
        self.start = start  # Start time of the meeting
        self.end = end      # End time of the meeting
        self.pos = pos      # Position or identifier of the meeting

class Solution:

    def maxMeetings(self, s: List[int], e: List[int], n: int) -> None:
        # Create a list of Meeting objects
        meetings = [Meeting(s[i], e[i], i + 1) for i in range(n)]
        
        # Sort meetings based on their end times, and then by their position if end times are equal
        meetings.sort(key=lambda x: (x.end, x.pos))
        
        answer = []   # List to store the order of meetings
        limit = meetings[0].end  # End time of the first meeting
        answer.append(meetings[0].pos)  # Add the first meeting's position to the answer
        
        # Iterate through the rest of the meetings
        for i in range(1, n):
            # If the start time of the current meeting is greater than the limit (end time of the last meeting added)
            if meetings[i].start > limit:
                limit = meetings[i].end  # Update the limit to the end time of the current meeting
                answer.append(meetings[i].pos)  # Add the current meeting's position to the answer
        
        # Print the order of meetings
        print("The order in which the meetings will be performed is:")
        for meeting_pos in answer:
            print(meeting_pos, end=" ")

if __name__ == "__main__":
    obj = Solution()
    n = 6
    start = [1, 3, 0, 5, 8, 5]
    end = [2, 4, 5, 7, 9, 9]
    obj.maxMeetings(start, end, n)
