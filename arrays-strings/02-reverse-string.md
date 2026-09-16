# Reverse a String

**Difficulty:** Easy

**LeetCode:** https://leetcode.com/problems/reverse-string/

## Approach

Use two pointers, one starting from the beginning of the string and the other from the end. Swap the characters at these positions and move both pointers toward the center until the string is reversed.

## Complexity

- **Time:** O(n)
- **Space:** O(1)

## Notes

Tested locally with two test cases:

1. Typical case: `"hello"` → `"olleh"`
2. Edge case: `"a"` → `"a"`

The solution was submitted successfully on LeetCode.