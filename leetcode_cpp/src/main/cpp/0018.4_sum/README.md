# 18. [4Sum](https://leetcode.com/problems/4sum/)

Given an array `nums` of `n` integers, return an array of all the **unique** quadruplets `[nums[a], nums[b], nums[c], nums[d]]` such that:

- 0 <= a, b, c, d < n
- a, b, c and d are **distinct**.
- nums[a] + nums[b] + nums[c] + nums[d] == target

You may return the answer in **any order**.

## Example1

> Input: nums = [1,0,-1,0,-2,2], target = 0
>
> Output: [[-2,-1,1,2],[-2,0,0,2],[-1,0,0,1]]

## Example2

> Input: nums = [2,2,2,2,2], target = 8
>
> Output: [[2,2,2,2]]

## Constraints

- 1 <= nums.length <= 200
- -109 <= nums[i] <= 109
- -109 <= target <= 109

## 题目大意

给定一个整数数组和一个目标值, 输出数组中任意4数之和等于目标值的数组组合, 注意需要排除重复的4数数组以及可以任意顺序输出.

## 解题大意

解题思路与15题一致, 去重和排序.
