<p align="center"><img src="https://algorithmxlr8.io/logo-mark.png" width="56" alt="AlgorithmXlr8.io logo" /></p>
<h3 align="center">AlgorithmXlr8.io</h3>
<p align="center"><sub>Solved and synced automatically from <a href="https://algorithmxlr8.io">AlgorithmXlr8.io</a></sub></p>

---

# Non-overlapping Intervals

**Difficulty:** `Medium`

## Problem

Given an array of intervals intervals where intervals[i] = [starti, endi], return the minimum number of intervals you need to remove to make the rest of the intervals non-overlapping.

Note that intervals which only touch at a point are non-overlapping. For example, [1, 2] and [2, 3] are non-overlapping.

Two intervals overlap when one of them starts strictly before the other one ends. Identical intervals always overlap, so out of several copies of the same interval at most one can be kept. The intervals are not given in any particular order. Equivalently, the answer is n minus the largest number of intervals that can be kept so that no two of them overlap.

Input format: The first line contains an integer n, the number of intervals. Each of the next n lines contains two integers starti and endi.

Output format: Print a single integer: the minimum number of intervals to remove.

## Examples

### Example 1

**Input**
```
intervals = [[1,2],[2,3],[3,4],[1,3]]
```
**Output**
```
1
```

**Explanation:** [1,3] can be removed and the rest of the intervals are non-overlapping: [1,2], [2,3] and [3,4] only touch at their end points.

### Example 2

**Input**
```
intervals = [[1,2],[1,2],[1,2]]
```
**Output**
```
2
```

**Explanation:** You need to remove two [1,2] to make the rest of the intervals non-overlapping.

### Example 3

**Input**
```
intervals = [[1,2],[2,3]]
```
**Output**
```
0
```

**Explanation:** You don't need to remove any of the intervals since they're already non-overlapping.

---

Solved on [AlgorithmXlr8.io](https://algorithmxlr8.io/solve-dsa/non-overlapping-intervals).