# Best Time to Buy and Sell Stock

**Difficulty:** Easy

**LeetCode:** https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

## Approach

Keep track of the minimum stock price seen so far while traversing the array. For each price, calculate the possible profit by subtracting the minimum price from the current price and update the maximum profit.

## Complexity

- **Time:** O(n)
- **Space:** O(1)

## Notes

Tested locally with two test cases:

1. Typical case: `[7, 1, 5, 3, 6, 4]` → `5`
2. Edge case: `[7, 6, 4, 3, 1]` → `0`

The solution was submitted successfully on LeetCode.