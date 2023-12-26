# 26.[Remove duplicates from sorted array](https://leetcode.com/problems/remove-duplicates-from-sorted-array/)

Given an integer array `nums` sorted in **non-decreasing order**, remove the duplicates `in-place` such that each unique element appears only **once**. The **relative order** of the elements should be kept the **same**. Then return the number of unique elements in nums.

Consider the number of unique elements of `nums` to be `k`, to get accepted, you need to do the following things:

Change the array `nums` such that the first k elements of `nums` contain the unique elements in the order they were present in `nums` initially. The remaining elements of `nums` are not important as well as the size of `nums`.
Return `k`.

## Custom Judge:

The judge will test your solution with the following code:

```code
int[] nums = [...]; // Input array
int[] expectedNums = [...]; // The expected answer with correct length

int k = removeDuplicates(nums); // Calls your implementation

assert k == expectedNums.length;
for (int i = 0; i < k; i++) {
    assert nums[i] == expectedNums[i];
}
```

If all assertions pass, then your solution will be accepted.

## Example1

> Input: nums = [1,1,2]
>
> Output: 2, nums = [1,2,_]
>
> Explanation: Your function should return k = 2, with the first two elements of nums being 1 and 2 respectively.
>
> It does not matter what you leave beyond the returned k (hence they are underscores).

## Example2

> Input: nums = [0,0,1,1,1,2,2,3,3,4]
>
> Output: 5, nums = [0,1,2,3,4,_,_,_,_,_]
>
> Explanation: Your function should return k = 5, with the first five elements of nums being 0, 1, 2, 3, and 4 respectively.
>
> It does not matter what you leave beyond the returned k (hence they are underscores).


## Constraints:

- 1 <= nums.length <= 3 * 104
- -100 <= nums[i] <= 100
- nums is sorted in non-decreasing order.

## 题目大意

给定一个有序数组 nums，对数组中的元素进行去重，使得原数组中的每个元素只有一个。最后返回去重以后数组的长度值。

## 解题思路

这道题和第 27 题很像。这道题和第 283 题，第 27 题基本一致，283 题是删除 0，27 题是删除指定元素，这一题是删除重复元素，实质是一样的。

这里数组的删除并不是真的删除，只是将删除的元素移动到数组后面的空间内，然后返回数组实际剩余的元素个数，OJ 最终判断题目的时候会读取数组剩余个数的元素进行输出。
