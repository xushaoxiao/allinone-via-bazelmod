# 75. [Sort Colors](https://leetcode.com/problems/sort-colors/description/)

Given an array `nums` with `n` objects colored red, white, or blue, sort them **in-place** so that objects of the same color are adjacent, with the colors in the order red, white, and blue.

We will use the integers `0`,`1`, and `2` to represent the color red, white, and blue, respectively.

You must solve this problem without using the libaray's sort function.

## Example1

```text
Input: nums = [2,0,2,1,1,0]
Output: [0,0,1,1,2,2]
```

## Example2

```text
Input: nums = [2,0,1]
Output: [0,1,2]
```

## Constraints

- n == nums.length
- 1 <= n <= 300
- nums[i] is either 0,1, or 2.

## 题目大意

抽象题意其实就是排序。这题可以用快排一次通过。

## 解题思路

