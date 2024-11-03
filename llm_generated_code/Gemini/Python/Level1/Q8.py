def max_meetings(start, end):
  """
  Finds the maximum number of meetings that can be accommodated and their schedule.

  Args:
      start: A list of meeting start times.
      end: A list of meeting end times.

  Returns:
      A tuple containing:
          - The maximum number of meetings
          - A list of meeting indices representing the schedule (in order of occurrence)
  """

  # Sort meetings by their end times (ascending)
  n = len(start)
  schedule = sorted(range(n), key=lambda i: end[i])

  # Greedy approach to find the maximum number of meetings
  max_meetings = 0
  prev_end_time = start[0]  # Initialize with the first meeting's start time
  meeting_schedule = []
  for i in schedule:
    if start[i] >= prev_end_time:  # Check if current meeting starts after previous meeting ends
      max_meetings += 1
      prev_end_time = end[i]  # Update end time for the next meeting check
      meeting_schedule.append(i)  # Add meeting index to the schedule

  return max_meetings, meeting_schedule

# Example usage
start = [1, 3, 0, 5, 8, 5]
end = [2, 4, 6, 7, 9, 9]

max_meetings_count, meeting_order = max_meetings(start, end)
print("Maximum number of meetings:", max_meetings_count)
print("Meeting schedule (indices):", meeting_order)
