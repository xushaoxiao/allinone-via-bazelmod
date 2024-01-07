# 19. [Remove Nth Node from End of List](https://leetcode.com/problems/remove-nth-node-from-end-of-list)

Given the `head` of a linked list, remove the `nth` node from the end of the list and return its head.

## Example1

![subject](https://assets.leetcode.com/uploads/2020/10/03/remove_ex1.jpg)

> Input: head = [1,2,3,4,5], n = 2
>
> Output: [1,2,3,5]

## Example2

> Input: head = [1], n = 1
>
> Output: []

## Example 3

> Input: head = [1,2], n = 1
>
> Output: [1]

## Constraints

- The number of nodes in the list is sz.
- 1 <= sz <= 30
- 0 <= Node.val <= 100
- 1 <= n <= sz

## 题目大意

删除链表中的倒数第n个节点.

## 解题思路

### 思路1

先循环一次拿到链表的总长度, 然后循环到要删除的节点的前一个节点开始删除操作. 需要注意特殊案例, 有可能要删除头节点, 要单独处理, 可以使用Dummy节点来作为head.

### 思路2

双指针, 先移动hi到与lo指针距离n, 然后同时移动lo、hi两个指针, 当hi指针移动到tail节点, lo就是nth的位置, 进行移除操作.
