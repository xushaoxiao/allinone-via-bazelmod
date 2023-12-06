# [1. Two Sum](https://leetcode.com/problems/two-sum/)

## Subject

Given an array of integers `nums` and an integer `target`, return indices of the two numbers such that they add up to `target`.

You may assume that each input would have **exactly one solution**, and you may not use the same element twice.

You can return the answer in any order.

### Example 1

> Input: nums = [2,7,11,15], target = 9
>
> Output: [0,1]
>
> Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].

### Example 2

> Input: nums = [3,2,4], target = 6
>
> Output: [1,2]

### Example 3

> Input: nums = [3,3], target = 6
>
> Output: [0,1]

### Constraints

- 2 <= nums.length <= 104
- 109 <= nums[i] <= 109
- 109 <= target <= 109
- Only one valid answer exists.

## 题目大意

在给定数组中找到2个数之和等于给定值的数字, 结果返回2个数字在数组中的下标.

## 解题思路

这道题最优的做法时间复杂度是O(n).

顺序扫描数组, 对每一个元素, 在Hash结构中找到能组合给定值的另一半数字, 如果找到了, 直接返回2个数字的下标即可. 如果找不到, 就把这个数字存入Hash中, 等待扫描“另一半”数字的时候, 再取出来返回结果.
