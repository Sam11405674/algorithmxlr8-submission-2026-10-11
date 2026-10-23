<p align="center"><img src="https://algorithmxlr8.io/logo-mark.png" width="56" alt="AlgorithmXlr8.io logo" /></p>
<h3 align="center">AlgorithmXlr8.io</h3>
<p align="center"><sub>Solved and synced automatically from <a href="https://algorithmxlr8.io">AlgorithmXlr8.io</a></sub></p>

---

# Min Cost Climbing Stairs

**Difficulty:** `Easy`

## Problem

You are given an integer array cost where cost[i] is the cost of ith step on a staircase. Once you pay the cost, you can either climb one or two steps.

You can either start from the step with index 0, or the step with index 1.

Return the minimum cost to reach the top of the floor.

The top of the floor is the position just past the last step (index n). You only pay for the steps you stand on, and reaching the top itself costs nothing.

Input format: the first line contains an integer n, the number of steps. The second line contains the n integers of cost separated by spaces.

Output format: print a single integer, the minimum total cost to reach the top.

## Examples

### Example 1

**Input**
```
cost = [10,15,20]
```
**Output**
```
15
```

**Explanation:** You will start at index 1.
- Pay 15 and climb two steps to reach the top.
The total cost is 15.

### Example 2

**Input**
```
cost = [1,100,1,1,1,100,1,1,100,1]
```
**Output**
```
6
```

**Explanation:** You will start at index 0.
- Pay 1 and climb two steps to reach index 2.
- Pay 1 and climb two steps to reach index 4.
- Pay 1 and climb two steps to reach index 6.
- Pay 1 and climb one step to reach index 7.
- Pay 1 and climb two steps to reach index 9.
- Pay 1 and climb one step to reach the top.
The total cost is 6.

---

Solved on [AlgorithmXlr8.io](https://algorithmxlr8.io/solve-dsa/min-cost-climbing-stairs).