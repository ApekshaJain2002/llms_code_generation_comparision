# List representing the number of balls in each child's basket
baskets = [3, 0, 5, 0, 2]  # Example input where 0 means an empty basket

# Separate baskets with balls from empty baskets
baskets_with_balls = [b for b in baskets if b > 0]
empty_baskets = [b for b in baskets if b == 0]

# Combine the lists with baskets with balls first, followed by empty baskets
arranged_baskets = baskets_with_balls + empty_baskets
print("Baskets arranged with non-empty at the front:", arranged_baskets)

