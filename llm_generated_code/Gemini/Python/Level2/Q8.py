def max_meetings(start_times, end_times):
    """
    Finds the maximum number of meetings that can be held and their order.

    Args:
        start_times: A list of integers representing the start times of meetings.
        end_times: A list of integers representing the end times of meetings.

    Returns:
        A list of indices of the meetings that can be held in optimal order.
    """

    n = len(start_times)
    meetings = sorted(enumerate(end_times), key=lambda x: x[1])  # Sort by end times
    
    end_time = 0
    result = []
    for i in range(n):
        if start_times[meetings[i][0]] >= end_time:
            result.append(meetings[i][0])
            end_time = end_times[meetings[i][0]]

    return result

# Example usage:
start_times = [1, 3, 0, 5, 8, 5]
end_times = [2, 4, 6, 7, 9, 9]
max_meetings = max_meetings(start_times, end_times)
print("Maximum number of meetings:", len(max_meetings))
print("Meeting order:", max_meetings)
