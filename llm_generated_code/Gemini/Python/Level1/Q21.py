def remove_wub(s):
  return ' '.join(s.replace('WUB', ' ').split())

def main():
  s = input()
  print(remove_wub(s))

if __name__ == "__main__":
  main()
