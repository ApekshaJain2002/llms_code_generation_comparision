def can_be_sum_of_large_numbers(x):
    str_x = str(x)
    length = len(str_x)
    
    # If x is too small to be a sum of two large numbers
    if length == 1:
        return "No"
    
    # Iterate through each possible length
    for d in range(1, length + 1):
        if d > 1:
            # Split x into two numbers, each with d digits
            num1, num2 = x // (10 ** (d - 1)), x % (10 ** (d - 1))
            
            # Check if both numbers have only large digits (5 to 9)
            if all(5 <= int(digit) <= 9 for digit in str(num1)) and all(5 <= int(digit) <= 9 for digit in str(num2)):
                return "Yes"
    
    return "No"

# Main function to handle multiple test cases
def main():
    t = int(input().strip())
    results = []
    
    for _ in range(t):
        x = int(input().strip())
        results.append(can_be_sum_of_large_numbers(x))
    
    for result in results:
        print(result)

# Call the main function
if __name__ == "__main__":
    main()
