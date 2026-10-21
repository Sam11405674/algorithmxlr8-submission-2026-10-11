<p align="center"><img src="https://algorithmxlr8.io/logo-mark.png" width="56" alt="AlgorithmXlr8.io logo" /></p>
<h3 align="center">AlgorithmXlr8.io</h3>
<p align="center"><sub>Solved and synced automatically from <a href="https://algorithmxlr8.io">AlgorithmXlr8.io</a></sub></p>

---

# Task Scheduler

**Difficulty:** `Medium`

## Problem

You are given an array of CPU tasks, each labeled with a letter from A to Z, and a number n. Each CPU interval can be idle or allow the completion of one task. Tasks can be completed in any order, but there's a constraint: there has to be a gap of at least n intervals between two tasks with the same label.

Return the minimum number of CPU intervals required to complete all tasks.

In other words, if a task with some label is done in interval i, the next task with the same label can be done in interval i + n + 1 at the earliest. Tasks with different labels can follow each other directly. When no task is allowed to run, the CPU has to stay idle, and idle intervals also count towards the answer. When n is 0 no waiting is ever needed and the answer is just the number of tasks.

Input format: A single line containing the tasks written together as one string of uppercase letters (one letter per task), then a space, then the integer n.

Output format: Print a single integer, the minimum number of CPU intervals.

## Examples

### Example 1

**Input**
```
tasks = ["A","A","A","B","B","B"], n = 2
```
**Output**
```
8
```

**Explanation:** A possible sequence is: A -> B -> idle -> A -> B -> idle -> A -> B. After completing task A, you must wait two intervals before doing A again. The same applies to task B. In the 3rd interval, neither A nor B can be done, so you idle. By the 4th interval, you can do A again as 2 intervals have passed.

### Example 2

**Input**
```
tasks = ["A","A","A","B","B","B"], n = 0
```
**Output**
```
6
```

**Explanation:** With no cooling time the six tasks can run back to back in any order, for example A -> A -> A -> B -> B -> B.

### Example 3

**Input**
```
tasks = ["A","A","A","A","A","A","B","C","D","E","F","G"], n = 2
```
**Output**
```
16
```

**Explanation:** One optimal order is A -> B -> C -> A -> D -> E -> A -> F -> G -> A -> idle -> idle -> A -> idle -> idle -> A. The six A tasks need at least 5 gaps of 2, which forces 16 intervals.

---

Solved on [AlgorithmXlr8.io](https://algorithmxlr8.io/solve-dsa/task-scheduler).