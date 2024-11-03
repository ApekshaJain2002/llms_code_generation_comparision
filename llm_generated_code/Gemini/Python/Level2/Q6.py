def reverse_spell(spell):
    """
    Reverses the order of words in a spell.

    Args:
        spell: A string representing the spell.

    Returns:
        The reversed spell.
    """

    words = spell.split()
    reversed_words = words[::-1]
    reversed_spell = " ".join(reversed_words)
    return reversed_spell

# Example usage:
spell = "abracadabra simsalabim hocus pocus"
reversed_spell = reverse_spell(spell)
print("Reversed spell:", reversed_spell)
