def max_meetings(start, end):
    # Create a list of tuples where each tuple contains the start and end time of meetings along with the original index
    meetings = sorted((e, s, i) for i, (s, e) in enumerate(zip(start, end)))
    
    # Initialize the variables
    max_meetings_list = []  # To store the order of meetings
    last_end_time = 0  # To track the end time of the last added meeting

    # Iterate through the sorted list of meetings
    for end_time, start_time, index in meetings:
        # Check if the meeting can be attended by comparing its start time with the last attended meeting's end time
        if start_time >= last_end_time:
            max_meetings_list.append(index + 1)  # Store the original index (1-based)
            last_end_time = end_time  # Update the last_end_time to the current meeting's end time

    return max_meetings_list

# Example usage
start_times = [1, 3, 0, 5, 8, 5]
end_times = [2, 4, 6, 7, 9, 9]
print(max_meetings(start_times, end_times))

