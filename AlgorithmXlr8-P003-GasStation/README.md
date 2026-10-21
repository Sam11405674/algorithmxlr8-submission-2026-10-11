<p align="center"><img src="https://algorithmxlr8.io/logo-mark.png" width="56" alt="AlgorithmXlr8.io logo" /></p>
<h3 align="center">AlgorithmXlr8.io</h3>
<p align="center"><sub>Solved and synced automatically from <a href="https://algorithmxlr8.io">AlgorithmXlr8.io</a></sub></p>

---

# Gas Station

**Difficulty:** `Medium`

## Problem

There are n gas stations along a circular route, where the amount of gas at the ith station is gas[i].

You have a car with an unlimited gas tank and it costs cost[i] of gas to travel from the ith station to its next (i + 1)th station. You begin the journey with an empty tank at one of the gas stations.

Given two integer arrays gas and cost, return the starting gas station's index if you can travel around the circuit once in the clockwise direction, otherwise return -1. If there exists a solution, it is guaranteed to be unique.

After station n - 1 the route continues to station 0. At each station you first add gas[i] to the tank and then spend cost[i] to drive to the next station; the tank may never become negative during the trip. If the total gas is less than the total cost, no start works.

Input format: the first line contains n. The second line contains the n values of gas separated by spaces. The third line contains the n values of cost separated by spaces.

Output format: print a single integer, the index of the starting station, or -1 if the circuit cannot be completed.

## Examples

### Example 1

**Input**
```
gas = [1,2,3,4,5], cost = [3,4,5,1,2]
```
**Output**
```
3
```

**Explanation:** Start at station 3 (index 3) and fill up with 4 units of gas. Your tank = 0 + 4 = 4. Travel to station 4. Your tank = 4 - 1 + 5 = 8. Travel to station 0. Your tank = 8 - 2 + 1 = 7. Travel to station 1. Your tank = 7 - 3 + 2 = 6. Travel to station 2. Your tank = 6 - 4 + 3 = 5. Travel to station 3. The cost is 5, and your gas is just enough to travel back to station 3. Therefore, return 3 as the starting index.

### Example 2

**Input**
```
gas = [2,3,4], cost = [3,4,3]
```
**Output**
```
-1
```

**Explanation:** You cannot start at station 0 or 1, as there is not enough gas to travel to the next station. Start at station 2 and fill up with 4 units: tank = 4. Travel to station 0: tank = 4 - 3 + 2 = 3. Travel to station 1: tank = 3 - 3 + 3 = 3. You cannot travel back to station 2, as it requires 4 units of gas but you only have 3. So the circuit cannot be completed from any start.

---

Solved on [AlgorithmXlr8.io](https://algorithmxlr8.io/solve-dsa/gas-station).