<p align="center"><img src="https://algorithmxlr8.io/logo-mark.png" width="56" alt="AlgorithmXlr8.io logo" /></p>
<h3 align="center">AlgorithmXlr8.io</h3>
<p align="center"><sub>Solved and synced automatically from <a href="https://algorithmxlr8.io">AlgorithmXlr8.io</a></sub></p>

---

# Wiggle Subsequence

**Difficulty:** `Medium`

## Problem

A wiggle sequence is a sequence where the differences between successive numbers strictly alternate between positive and negative. The first difference (if one exists) may be either positive or negative. A sequence with one element and a sequence with two non-equal elements are trivially wiggle sequences.

- For example, [1, 7, 4, 9, 2, 5] is a wiggle sequence because the differences (6, -3, 5, -7, 3) alternate between positive and negative.
- In contrast, [1, 4, 7, 2, 5] and [1, 7, 4, 5, 5] are not wiggle sequences. The first is not because its first two differences are positive, and the second is not because its last difference is zero.

A subsequence is obtained by deleting some elements (possibly zero) from the original sequence, leaving the remaining elements in their original order.

Given an integer array nums, return the length of the longest wiggle subsequence of nums.

Input format: the first line contains the integer n, the length of nums. The second line contains the n integers of nums separated by single spaces.

Output format: print a single integer, the length of the longest wiggle subsequence.

Follow up: Could you solve this in O(n) time?

## Examples

### Example 1

**Input**
```
nums = [1,7,4,9,2,5]
```
**Output**
```
6
```

**Explanation:** The entire sequence is a wiggle sequence with differences (6, -3, 5, -7, 3).

### Example 2

**Input**
```
nums = [1,2,3,4,5,6,7,8,9]
```
**Output**
```
2
```

**Explanation:** Every difference is positive, so a wiggle subsequence can contain only one rise, for example [1, 9], which has length 2.

---

Solved on [AlgorithmXlr8.io](https://algorithmxlr8.io/solve-dsa/wiggle-subsequence).