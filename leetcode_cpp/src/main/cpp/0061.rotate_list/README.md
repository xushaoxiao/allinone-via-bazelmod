# 61. [Rotate List](https://leetcode.com/problems/rotate-list/description/)

Given the `head` of a linked list, rotate the list to the right by `k` places.

## Example1

![image](https://assets.leetcode.com/uploads/2020/11/13/rotate1.jpg)

```text
Input: head = [1,2,3,4,5], k = 2
Output: [4,5,1,2,3]
```

## Example2

![image](https://assets.leetcode.com/uploads/2020/11/13/roate2.jpg)

## Constraints

- The number of nodes in the list is in the range [0, 500].
- -100 <= Node.val <= 100
- 0 <= k <= 2 * 10^9

## 题目大意

旋转链表 K 次。

## 解题思路

这道题需要注意的点是，K 可能很大，K = 2000000000 ，如果是循环肯定会超时。应该找出 O(n) 的复杂度的算法才行。由于是循环旋转，最终状态其实是确定的，利用链表的长度取余可以得到链表的最终旋转结果。

这道题也不能用递归，递归解法会超时。
