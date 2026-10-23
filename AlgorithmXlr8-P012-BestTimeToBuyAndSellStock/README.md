<p align="center"><img src="https://algorithmxlr8.io/logo-mark.png" width="56" alt="AlgorithmXlr8.io logo" /></p>
<h3 align="center">AlgorithmXlr8.io</h3>
<p align="center"><sub>Solved and synced automatically from <a href="https://algorithmxlr8.io">AlgorithmXlr8.io</a></sub></p>

---

# Best Time to Buy and Sell Stock

**Difficulty:** `Easy`

## Problem

You are given an array prices where prices[i] is the price of a given stock on the ith day.

You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.

Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.

You must buy before you sell, so the selling day has to come strictly after the buying day. You make at most one transaction: either you buy once and sell once, or you do nothing and earn 0. Buying on day i and selling on day j earns prices[j] - prices[i].

Input format: the first line contains an integer n, the number of days. The second line contains n space separated integers, the prices in day order.

Output format: print a single integer, the maximum profit.

## Examples

### Example 1

**Input**
```
prices = [7,1,5,3,6,4]
```
**Output**
```
5
```

**Explanation:** Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6 - 1 = 5. Note that buying on day 2 and selling on day 1 is not allowed because you must buy before you sell.

### Example 2

**Input**
```
prices = [7,6,4,3,1]
```
**Output**
```
0
```

**Explanation:** In this case, no transactions are done and the max profit = 0.

### Example 3

**Input**
```
prices = [2,4,1,7]
```
**Output**
```
6
```

**Explanation:** Buy on day 3 (price = 1) and sell on day 4 (price = 7), profit = 6. This beats buying at 2 and selling at 4 or at 7, because the lowest price comes later.

---

Solved on [AlgorithmXlr8.io](https://algorithmxlr8.io/solve-dsa/best-time-to-buy-and-sell-stock).