# 27. [Remvoe Element](https://leetcode.com/problems/remove-element/)

Given an integer array `nums` and an integer `val`, remove all occurrences of `val` in `nums` **in-place**. The order of the elements may be changed. Then return the number of elements in `nums` which are not equal to `val`.

Consider the number of elements in `nums` which are not equal to `val` be `k`, to get accepted, you need to do the following things:

- Change the array `nums` such that the first `k` elements of `nums` contain the elements which are not equal to `val`. The remaining elements of `nums` are not important as well as the size of `nums`.
- Return `k`.

## Custom Judge

The judge will test your solution with the following code:

```cpp
int[] nums = [...]; // Input array
int val = ...; // Value to remove
int[] expectedNums = [...]; // The expected answer with correct length.
                            // It is sorted with no values equaling val.

int k = removeElement(nums, val); // Calls your implementation

assert k == expectedNums.length;
sort(nums, 0, k); // Sort the first k elements of nums
for (int i = 0; i < actualLength; i++) {
    assert nums[i] == expectedNums[i];
}
```

If all assertions pass, then your solution will be accepted.

## Example1

> Input: nums = [3,2,2,3], val = 3
>
> Output: 2, nums = [2,2,_,_]
>
> Explanation: Your function should return k = 2, with the first two elements of nums being 2.  
It does not matter what you leave beyond the returned k (hence they are underscores).

## Example2

> Input: nums = [0,1,2,2,3,0,4,2], val = 2
>
> Output: 5, nums = [0,1,4,0,3,_,_,_]
>
> Explanation: Your function should return k = 5, with the first five elements of nums containing 0, 0, 1, 3, and 4.  
Note that the five elements can be returned in any order.  
It does not matter what you leave beyond the returned k (hence they are underscores).

## Constraints

- 0 <= nums.length <= 100
- 0 <= nums[i] <= 50
- 0 <= val <= 100

## 题目大意

给定一个数组 nums 和一个数值 val，将数组中所有等于 val 的元素删除，并返回剩余的元素个数。

## 解题思路

这道题和第 283 题很像。这道题和第 283 题基本一致，283 题是删除 0，这一题是给定的一个 val，实质是一样的。

这里数组的删除并不是真的删除，只是将删除的元素移动到数组后面的空间内，然后返回数组实际剩余的元素个数，OJ 最终判断题目的时候会读取数组剩余个数的元素进行输出。
