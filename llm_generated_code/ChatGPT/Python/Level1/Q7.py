class ListNode:
    def __init__(self, x):
        self.val = x
        self.next = None

def has_cycle(head):
    if not head or not head.next:
        return False

    slow = head  # Moves one step at a time
    fast = head.next  # Moves two steps at a time

    while slow != fast:
        if not fast or not fast.next:
            return False  # Fast pointer has reached the end of the list
        slow = slow.next  # Move slow pointer one step
        fast = fast.next.next  # Move fast pointer two steps

    return True  # Slow and fast pointers have met, cycle exists

