def check_anagrams(str1: str, str2: str) -> bool:
    # Case 1: Check if both strings have different lengths
    if len(str1) != len(str2):
        return False
    
    # Sort both strings
    str1_sorted = sorted(str1)
    str2_sorted = sorted(str2)
    
    # Case 2: Check if every character of str1 and str2 matches
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
