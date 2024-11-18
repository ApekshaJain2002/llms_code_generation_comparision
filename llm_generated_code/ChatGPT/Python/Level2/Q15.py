from collections import Counter

def count_name_tags(name_tags):
    return Counter(name_tags)

name_tags = ["Alice", "Bob", "Alice", "Charlie", "Bob", "Alice"]
print(count_name_tags(name_tags))
