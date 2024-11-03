def has_cycle(head):
  """
  Detects a cycle in a linked list using the Floyd's Cycle-Finding Algorithm.

  Args:
      head: The head node of the linked list.

  Returns:
      True if a cycle exists, False otherwise.
  """

  slow = fast = head
  while fast and fast.next:
    slow = slow.next
    fast = fast.next.next
    if slow == fast:
      return True
  return False
