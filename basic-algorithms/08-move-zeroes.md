# Move Zeroes

**Difficulty:** Easy

**LeetCode:** https://leetcode.com/problems/move-zeroes/

## Approach

Traverse the array and move every non-zero element toward the beginning while keeping their original order. After all non-zero elements are placed, fill the remaining positions with zeroes.

## Complexity

- **Time:** O(n)
- **Space:** O(1)

## Notes

Tested locally with two test cases:

1. Typical case: `[0, 1, 0, 3, 12]` → `[1, 3, 12, 0, 0]`
2. Edge case: `[0]` → `[0]`

The solution was submitted successfully on LeetCode.