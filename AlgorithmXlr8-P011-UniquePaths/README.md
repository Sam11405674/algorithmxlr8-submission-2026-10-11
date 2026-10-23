<p align="center"><img src="https://algorithmxlr8.io/logo-mark.png" width="56" alt="AlgorithmXlr8.io logo" /></p>
<h3 align="center">AlgorithmXlr8.io</h3>
<p align="center"><sub>Solved and synced automatically from <a href="https://algorithmxlr8.io">AlgorithmXlr8.io</a></sub></p>

---

# Unique Paths

**Difficulty:** `Medium`

## Problem

There is a robot on an m x n grid. The robot is initially located at the top-left corner (i.e., grid[0][0]). The robot tries to move to the bottom-right corner (i.e., grid[m - 1][n - 1]). The robot can only move either down or right at any point in time.

Given the two integers m and n, return the number of possible unique paths that the robot can take to reach the bottom-right corner.

Two paths are different when their sequences of moves differ. Every path consists of exactly m - 1 moves down and n - 1 moves right in some order. On a 1 x 1 grid the robot already stands on the target, which counts as 1 path.

The test cases are generated so that the answer will be less than or equal to 2 * 10^9.

Input format: a single line containing two integers m and n separated by a space (m rows and n columns).

Output format: print a single integer, the number of unique paths.

## Examples

### Example 1

**Input**
```
m = 3, n = 7
```
**Output**
```
28
```

**Explanation:** The robot needs 2 moves down and 6 moves right, 8 moves in total. Choosing which 2 of the 8 moves go down gives C(8, 2) = 28 different paths.

### Example 2

**Input**
```
m = 3, n = 2
```
**Output**
```
3
```

**Explanation:** From the top-left corner, there are a total of 3 ways to reach the bottom-right corner: Right -> Down -> Down, Down -> Down -> Right and Down -> Right -> Down.

---

Solved on [AlgorithmXlr8.io](https://algorithmxlr8.io/solve-dsa/unique-paths).