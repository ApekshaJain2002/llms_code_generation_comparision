def reverse_spell(spell):
    # Split the spell into words
    words = spell.split()
    # Reverse the order of words
    reversed_spell = ' '.join(reversed(words))
    return reversed_spell

# Example usage
spell = "abracadabra alohomora expelliarmus"
reversed_spell = reverse_spell(spell)
print("Reversed spell:", reversed_spell)

