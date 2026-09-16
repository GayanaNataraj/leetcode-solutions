# Two Sum

**Difficulty:** Easy

**LeetCode:** https://leetcode.com/problems/two-sum/

## Approach

Use two nested loops to check every pair of elements in the array. If the sum of two elements equals the target, return their indices.

## Complexity

- **Time:** O(n²)
- **Space:** O(1)

## Notes

Tested locally with two test cases:

1. Typical case: `[2, 7, 11, 15]`, target `9` → `[0, 1]`
2. Edge case: `[3, 3]`, target `6` → `[0, 1]`

The solution was submitted successfully on LeetCode.