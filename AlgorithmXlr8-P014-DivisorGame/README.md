<p align="center"><img src="https://algorithmxlr8.io/logo-mark.png" width="56" alt="AlgorithmXlr8.io logo" /></p>
<h3 align="center">AlgorithmXlr8.io</h3>
<p align="center"><sub>Solved and synced automatically from <a href="https://algorithmxlr8.io">AlgorithmXlr8.io</a></sub></p>

---

# Divisor Game

**Difficulty:** `Easy`

## Problem

Alice and Bob take turns playing a game, with Alice starting first.

Initially, there is a number n on the chalkboard. On each player's turn, that player makes a move consisting of:
- Choosing any x with 0 < x < n and n % x == 0.
- Replacing the number n on the chalkboard with n - x.

Also, if a player cannot make a move, they lose the game. A player cannot move exactly when the number on the board is 1, because no x satisfies 0 < x < 1.

Return true if and only if Alice wins the game, assuming both players play optimally.

Input format: a single line with the integer n.

Output format: print true if Alice wins, otherwise print false.

## Examples

### Example 1

**Input**
```
n = 2
```
**Output**
```
true
```

**Explanation:** Alice chooses x = 1 and the board becomes 1. Bob has no move, so Alice wins.

### Example 2

**Input**
```
n = 3
```
**Output**
```
false
```

**Explanation:** Alice's only choice is x = 1, leaving 2. Bob chooses 1, leaving 1, and now Alice has no move, so she loses.

---

Solved on [AlgorithmXlr8.io](https://algorithmxlr8.io/solve-dsa/divisor-game).