# Longest Common Prefix

**Difficulty:** Easy

**LeetCode:** https://leetcode.com/problems/longest-common-prefix/

## Approach

Compare the characters of the first string with the corresponding characters of all the other strings. Stop when a character differs or when the end of any string is reached. The characters before that position form the longest common prefix.

## Complexity

- **Time:** O(n × m)
- **Space:** O(1)

## Notes

Tested locally with two test cases:

1. Typical case: `["flower", "flow", "flight"]` → `"fl"`
2. Edge case: `["dog", "racecar", "car"]` → `""`

The solution was submitted successfully on LeetCode.