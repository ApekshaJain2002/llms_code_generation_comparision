def main():
    n = 3  
    prev2 = 1  
    prev = 1    
    for i in range(2, n+1):
        cur_i = prev2 + prev  
        prev2 = prev          
        prev = cur_i          
    print(prev)  
if __name__ == "__main__":
    main()
