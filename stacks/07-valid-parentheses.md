# Valid Parentheses

**Difficulty:** Easy

**LeetCode:** https://leetcode.com/problems/valid-parentheses/

## Approach

Use a stack to store opening brackets. When a closing bracket is found, compare it with the most recent opening bracket in the stack. The string is valid if all brackets match correctly and the stack is empty at the end.

## Complexity

- **Time:** O(n)
- **Space:** O(n)

## Notes

Tested locally with two test cases:

1. Typical case: `"()[]{}"` → `true`
2. Edge case: `"(]"` → `false`

The solution was submitted successfully on LeetCode.