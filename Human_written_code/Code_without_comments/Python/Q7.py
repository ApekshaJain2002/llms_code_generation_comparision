class Node:
    def __init__(self, data, next_node=None):
        self.data = data
        self.next = next_node
def detect_cycle(head):
    slow = head
    fast = head
    while fast is not None and fast.next is not None:
        slow = slow.next
        fast = fast.next.next
        if slow == fast:
            return True  
    return False
if __name__ == "__main__":
    head = Node(1)
    second = Node(2)
    third = Node(3)
    fourth = Node(4)
    fifth = Node(5)
    head.next = second
    second.next = third
    third.next = fourth
    fourth.next = fifth
    fifth.next = third
    if detect_cycle(head):
        print("Loop detected in the linked list.")
    else:
        print("No loop detected in the linked list.")
