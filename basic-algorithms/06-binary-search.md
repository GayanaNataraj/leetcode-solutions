# Binary Search

**Difficulty:** Easy

**LeetCode:** https://leetcode.com/problems/binary-search/

## Approach

Use two pointers, `left` and `right`, to represent the current search range. Check the middle element and eliminate half of the search range based on whether the target is smaller or larger than the middle element.

## Complexity

- **Time:** O(log n)
- **Space:** O(1)

## Notes

Tested locally with two test cases:

1. Typical case: `[1, 3, 5, 7, 9]`, target `5` → index `2`
2. Edge case: `[2]`, target `3` → `-1`

The solution was submitted successfully on LeetCode.