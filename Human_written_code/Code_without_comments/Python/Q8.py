from typing import List
class Meeting:
    def __init__(self, start: int, end: int, pos: int):
        self.start = start  
        self.end = end      
        self.pos = pos      
class Solution:
    def maxMeetings(self, s: List[int], e: List[int], n: int) -> None:
        meetings = [Meeting(s[i], e[i], i + 1) for i in range(n)]
        meetings.sort(key=lambda x: (x.end, x.pos))
        answer = []   
        limit = meetings[0].end  
        answer.append(meetings[0].pos)  
        for i in range(1, n):
            if meetings[i].start > limit:
                limit = meetings[i].end  
                answer.append(meetings[i].pos)  
        print("The order in which the meetings will be performed is:")
        for meeting_pos in answer:
            print(meeting_pos, end=" ")
if __name__ == "__main__":
    obj = Solution()
    n = 6
    start = [1, 3, 0, 5, 8, 5]
    end = [2, 4, 5, 7, 9, 9]
    obj.maxMeetings(start, end, n)
