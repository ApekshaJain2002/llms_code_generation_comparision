def longest_streak(spells):
    max_streak = 0
    current_streak = 0
    for spell in spells:
        if spell == 1:
            current_streak += 1
            max_streak = max(max_streak, current_streak)
        else:
            current_streak = 0
    return max_streak
