def main():
    song = input()
    original_song = " ".join([word for word in song.split("WUB") if word != ""])
    print(original_song)

if __name__ == "__main__":
    main()
