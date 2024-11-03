def reverse_words(s):
  """
  Reverses the order of words in a string.

  Args:
      s: The input string.

  Returns:
      The string with reversed word order.
  """

  words = s.split()
  words.reverse()
  return ' '.join(words)
