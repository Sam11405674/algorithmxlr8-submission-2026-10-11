<p align="center"><img src="https://algorithmxlr8.io/logo-mark.png" width="56" alt="AlgorithmXlr8.io logo" /></p>
<h3 align="center">AlgorithmXlr8.io</h3>
<p align="center"><sub>Solved and synced automatically from <a href="https://algorithmxlr8.io">AlgorithmXlr8.io</a></sub></p>

---

# N-th Tribonacci Number

**Difficulty:** `Easy`

## Problem

The Tribonacci sequence Tn is defined as follows:

T0 = 0, T1 = 1, T2 = 1, and Tn+3 = Tn + Tn+1 + Tn+2 for n >= 0.

Given n, return the value of Tn.

In words, the first three terms are 0, 1 and 1, and every later term is the sum of the three terms just before it. The sequence starts 0, 1, 1, 2, 4, 7, 13, 24, 44, 81, and so on. Note that n is 0-indexed: n = 0 asks for T0 = 0.

The answer is guaranteed to fit within a 32-bit integer, i.e. answer <= 2^31 - 1.

Input format: A single line containing the integer n.

Output format: Print a single integer: the value of Tn.

## Examples

### Example 1

**Input**
```
n = 4
```
**Output**
```
4
```

**Explanation:** T_3 = 0 + 1 + 1 = 2 and T_4 = 1 + 1 + 2 = 4.

### Example 2

**Input**
```
n = 25
```
**Output**
```
1389537
```

**Explanation:** Continuing the sequence, T_22 = 223317, T_23 = 410744 and T_24 = 755476, so T_25 = 223317 + 410744 + 755476 = 1389537.

---

Solved on [AlgorithmXlr8.io](https://algorithmxlr8.io/solve-dsa/n-th-tribonacci-number).