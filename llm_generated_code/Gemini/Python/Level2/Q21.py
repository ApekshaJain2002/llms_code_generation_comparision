def restore_song(song):
  return " ".join(word for word in song.split("WUB") if word)

def main():
  song = input()
  print(restore_song(song))

if __name__ == "__main__":
  main()
