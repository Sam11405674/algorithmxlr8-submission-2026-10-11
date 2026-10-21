<p align="center"><img src="https://algorithmxlr8.io/logo-mark.png" width="56" alt="AlgorithmXlr8.io logo" /></p>
<h3 align="center">AlgorithmXlr8.io</h3>
<p align="center"><sub>Solved and synced automatically from <a href="https://algorithmxlr8.io">AlgorithmXlr8.io</a></sub></p>

---

# Hand of Straights

**Difficulty:** `Medium`

## Problem

Alice has some number of cards and she wants to rearrange the cards into groups so that each group is of size groupSize, and consists of groupSize consecutive cards.

Given an integer array hand where hand[i] is the value written on the ith card and an integer groupSize, return true if she can rearrange the cards, or false otherwise.

Every card must be used in exactly one group. Consecutive means the values in a group are v, v + 1, ..., v + groupSize - 1 for some v, so cards with equal values must go into different groups. If the number of cards is not a multiple of groupSize the answer is false.

Input format: the first line contains two integers n (the number of cards) and groupSize separated by a space. The second line contains the n card values separated by spaces.

Output format: print true if the cards can be rearranged into such groups, otherwise print false.

## Examples

### Example 1

**Input**
```
hand = [1,2,3,6,2,3,4,7,8], groupSize = 3
```
**Output**
```
true
```

**Explanation:** Alice's hand can be rearranged as [1,2,3],[2,3,4],[6,7,8].

### Example 2

**Input**
```
hand = [1,2,3,4,5], groupSize = 4
```
**Output**
```
false
```

**Explanation:** Alice's hand of 5 cards cannot be rearranged into groups of 4.

---

Solved on [AlgorithmXlr8.io](https://algorithmxlr8.io/solve-dsa/hand-of-straights).