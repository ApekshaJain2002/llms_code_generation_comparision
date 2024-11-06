def min_trips(s):
  count = 1
  curr_type = s[0]
  curr_count = 1
  for i in range(1, len(s)):
    if s[i] == curr_type:
      curr_count += 1
    else:
      count += (curr_count + 4) // 5
      curr_type = s[i]
      curr_count = 1
  count += (curr_count + 4) // 5
  return count

def main():
  s = input()
  print(min_trips(s))

if __name__ == "__main__":
  main()
