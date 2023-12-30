# 15. [3 sum](https://leetcode.com/problems/3sum/description/)

Given an integer array nums, return all the triplets `[nums[i], nums[j], nums[k]]` such that `i != j, i != k`, and `j != k`, and `nums[i] + nums[j] + nums[k] == 0`.

Notice that the solution set must not contain duplicate triplets.

## Example1

> Input: nums = [-1,0,1,2,-1,-4]
>
> Output: [[-1,-1,2],[-1,0,1]]
>
>Explanation: 
>
> nums[0] + nums[1] + nums[2] = (-1) + 0 + 1 = 0.
>
> nums[1] + nums[2] + nums[4] = 0 + 1 + (-1) = 0.
>
> nums[0] + nums[3] + nums[4] = (-1) + 2 + (-1) = 0.
>
> The distinct triplets are [-1,0,1] and [-1,-1,2].
>
> Notice that the order of the output and the order of the triplets does not matter.

## Example2

> Input: nums = [0,1,1]
>
> Output: []
>
> Explanation: The only possible triplet does not sum up to 0.

## Example3

> Input: nums = [0,0,0]
>
> Output: [[0,0,0]]
>
> Explanation: The only possible triplet sums up to 0.

## Constraints:

- 3 <= nums.length <= 3000
- -105 <= nums[i] <= 105

## 题目大意

输入一个数组, 要求输出数组中3数之和为0的所有组合的数组.

## 解题思路

按照题目提示, 并没有要求输出结果按照元素原有顺序输出并且声明输出结果不可重复, 所以我们可以先对输入数组进行排序处理, 然后利用外层循环加内层双指针的解法来解答. 可以将时间复杂度和空间复杂度同时降到最优.
