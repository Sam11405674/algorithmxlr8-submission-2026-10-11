<p align="center"><img src="https://algorithmxlr8.io/logo-mark.png" width="56" alt="AlgorithmXlr8.io logo" /></p>
<h3 align="center">AlgorithmXlr8.io</h3>
<p align="center"><sub>Solved and synced automatically from <a href="https://algorithmxlr8.io">AlgorithmXlr8.io</a></sub></p>

---

# Best Time to Buy and Sell Stock II

**Difficulty:** `Medium`

## Problem

You are given an integer array prices where prices[i] is the price of a given stock on the ith day.

On each day, you may decide to buy and/or sell the stock. You can only hold at most one share of the stock at any time. However, you can buy it then immediately sell it on the same day.

Find and return the maximum profit you can achieve.

There is no limit on the number of transactions, but because you can hold at most one share, you must sell before you buy again. If the price never rises, the best choice is to do nothing and the profit is 0. Every rise from one day to the next can be captured, so the answer equals the sum of all positive day to day price increases.

Input format: the first line contains an integer n, the number of days. The second line contains n space separated integers, the prices in day order.

Output format: print a single integer, the maximum total profit.

## Examples

### Example 1

**Input**
```
prices = [7,1,5,3,6,4]
```
**Output**
```
7
```

**Explanation:** Buy on day 2 (price = 1) and sell on day 3 (price = 5), profit = 5 - 1 = 4. Then buy on day 4 (price = 3) and sell on day 5 (price = 6), profit = 6 - 3 = 3. Total profit is 4 + 3 = 7.

### Example 2

**Input**
```
prices = [1,2,3,4,5]
```
**Output**
```
4
```

**Explanation:** Buy on day 1 (price = 1) and sell on day 5 (price = 5), profit = 5 - 1 = 4. Total profit is 4.

---

Solved on [AlgorithmXlr8.io](https://algorithmxlr8.io/solve-dsa/best-time-to-buy-and-sell-stock-ii).