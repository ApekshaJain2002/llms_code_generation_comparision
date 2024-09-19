def check_anagrams(str1: str, str2: str) -> bool:
    if len(str1) != len(str2):
        return False
    str1_sorted = sorted(str1)
    str2_sorted = sorted(str2)
    return str1_sorted == str2_sorted
def main():
    str1 = "INTEGER"
    str2 = "TEGERNI"
    if check_anagrams(str1, str2):
        print("True")
    else:
        print("False")
if __name__ == "__main__":
    main()
