def main():
    n, m = map(int, input().split())
    items = input().strip()
    count = 0
    i = 0
    while i < n:
        count += 1
        item_count = 0
        current_item = items[i]
        while i < n and item_count < m and items[i] == current_item:
            item_count += 1
            i += 1
    print(count)

if __name__ == "__main__":
    main()
