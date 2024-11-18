class TreeNode:
    def __init__(self, value=0, next=None):
        self.value = value
        self.next = next

def has_cycle(start_node):
    slow = start_node  # Slow pointer
    fast = start_node  # Fast pointer

    while fast is not None and fast.next is not None:
        slow = slow.next         # Move slow by one step
        fast = fast.next.next    # Move fast by two steps

        if slow == fast:  # Cycle detected
            return True

    return False  # No cycle

# Example setup
# Creating nodes for testing
a = TreeNode(1)
b = TreeNode(2)
c = TreeNode(3)
d = TreeNode(4)

# Creating a cycle for testing: 1 -> 2 -> 3 -> 4 -> 2 ...
a.next = b
b.next = c
c.next = d
d.next = b  # Cycle here

# Check if there is a cycle
if has_cycle(a):
    print("The path has a cycle.")
else:
    print("The path is safe to explore.")

