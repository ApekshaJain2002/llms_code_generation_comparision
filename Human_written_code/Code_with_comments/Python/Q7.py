
# Node class represents
# a node in a linked list
class Node:
    def __init__(self, data, next_node=None):
        self.data = data
        self.next = next_node

# Function to detect a loop in a
# linked list using the Tortoise and Hare Algorithm
def detect_cycle(head):
    # Initialize two pointers, slow and fast,
    # to the head of the linked list
    slow = head
    fast = head

    # Step 2: Traverse the linked list
    # with the slow and fast pointers
    while fast is not None and fast.next is not None:
        # Move slow one step
        slow = slow.next
        # Move fast two steps
        fast = fast.next.next

        # Check if slow and fast pointers meet
        if slow == fast:
            return True  # Loop detected

    # If fast reaches the end of the
    # list, there is no loop
    return False


if __name__ == "__main__":
    # Create a sample linked list with
    # a loop for testing
    head = Node(1)
    second = Node(2)
    third = Node(3)
    fourth = Node(4)
    fifth = Node(5)

    head.next = second
    second.next = third
    third.next = fourth
    fourth.next = fifth
    # Create a loop
    fifth.next = third

    # Check if there is a loop
    # in the linked list
    if detect_cycle(head):
        print("Loop detected in the linked list.")
    else:
        print("No loop detected in the linked list.")

    # No need to explicitly free memory
    # in Python; memory management is automatic

