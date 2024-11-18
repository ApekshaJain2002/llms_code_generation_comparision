def max_meetings(start, end):
    # Pair each meeting's start and end times, along with its original index
    meetings = sorted(zip(start, end, range(len(start))), key=lambda x: x[1])

    max_meetings_order = []
    last_end_time = 0

    for s, e, idx in meetings:
        if s >= last_end_time:  # If the meeting starts after or when the last meeting ended
            max_meetings_order.append(idx)  # Add meeting index to the order
            last_end_time = e  # Update the end time to this meeting's end time

    return len(max_meetings_order), [start[i] for i in max_meetings_order], [end[i] for i in max_meetings_order]

# Example usage
start_times = [1, 3, 0, 5, 8, 5]
end_times = [2, 4, 6, 7, 9, 9]

max_meeting_count, ordered_start_times, ordered_end_times = max_meetings(start_times, end_times)
print("Maximum number of meetings:", max_meeting_count)
print("Order of meetings (start times):", ordered_start_times)
print("Order of meetings (end times):", ordered_end_times)

