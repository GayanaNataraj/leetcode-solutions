# Valid Anagram

**Difficulty:** Easy

**LeetCode:** https://leetcode.com/problems/valid-anagram/

## Approach

Use a frequency array of size 26 to count the occurrences of each lowercase letter. Increase the count for each character in the first string and decrease it for the corresponding character in the second string. If all counts are zero, the two strings are anagrams.

## Complexity

- **Time:** O(n)
- **Space:** O(1)

## Notes

Tested locally with two test cases:

1. Typical case: `"anagram"` and `"nagaram"` → `true`
2. Edge case: `"a"` and `"b"` → `false`

The solution was submitted successfully on LeetCode.