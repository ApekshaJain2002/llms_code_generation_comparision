def is_mirror_word(word):
  mirror_chars = {'A': 'A', 'H': 'H', 'I': 'I', 'M': 'M', 'O': 'O', 'T': 'T', 'U': 'U', 'V': 'V', 'W': 'W', 'X': 'X', 'Y': 'Y'}
  left, right = 0, len(word) - 1
  while left < right:
    if word[left] not in mirror_chars or word[right] not in mirror_chars or mirror_chars[word[left]] != word[right]:
      return "NO"
    left += 1
    right -= 1
  return "YES"

def main():
  word = input()
  print(is_mirror_word(word))

if __name__ == "__main__":
  main()
