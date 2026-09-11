# ═══════════════════════════════════════════════════════
# Problem: 190. Reverse Bits
# Difficulty: Easy
# Topics: Divide and Conquer, Bit Manipulation
# Runtime: N/A (Beats 0.0%)
# Memory: N/A (Beats 0.0%)
# Submitted: Sep 11, 2026
# Link: https://leetcode.com/problems/reverse-bits/
# ═══════════════════════════════════════════════════════

def reverse_bits(n: int, bit_length: int = 32) -> int:
    # 1. format(n, f'0{bit_length}b') converts the number into a 32-digit binary string filled with leading zeros.
    # 2. [::-1] directly reverses that string.
    # 3. int(..., 2) converts the reversed binary string back into a base-2 integer.
    return int(format(n, f'0{bit_length}b')[::-1], 2)

# Example:
print(reverse_bits(13))  # Output: 2952790016

