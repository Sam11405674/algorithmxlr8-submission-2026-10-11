<p align="center"><img src="https://algorithmxlr8.io/logo-mark.png" width="56" alt="AlgorithmXlr8.io logo" /></p>
<h3 align="center">AlgorithmXlr8.io</h3>
<p align="center"><sub>Solved and synced automatically from <a href="https://algorithmxlr8.io">AlgorithmXlr8.io</a></sub></p>

---

# Camelcase Matching

**Difficulty:** `Medium`

## Problem

Given an array of strings queries and a string pattern, return a boolean array answer where answer[i] is true if queries[i] matches pattern, and false otherwise.

A query word queries[i] matches pattern if you can insert lowercase English letters into the pattern so that it equals the query. You may insert each character at any position and you may not insert any characters.

In other words, the pattern must appear in the query as a subsequence (same letters in the same order, with the same case), and every letter of the query that is not used by the pattern must be lowercase. An extra uppercase letter in the query that the pattern does not account for makes it fail. Inserting no characters at all is allowed, so a query equal to the pattern matches.

Input format: the first line contains an integer n, the number of queries. Each of the next n lines contains one query. The last line contains the pattern.

Output format: print n lines; line i is true if queries[i] matches the pattern, otherwise false.

## Examples

### Example 1

**Input**
```
queries = ["FooBar","FooBarTest","FootBall","FrameBuffer","ForceFeedBack"], pattern = "FB"
```
**Output**
```
[true,false,true,true,false]
```

**Explanation:** "FooBar" can be generated like this "F" + "oo" + "B" + "ar". "FootBall" can be generated like this "F" + "oot" + "B" + "all". "FrameBuffer" can be generated like this "F" + "rame" + "B" + "uffer". "FooBarTest" has an extra uppercase T and "ForceFeedBack" has an extra uppercase F, which cannot be inserted, so they do not match.

---

Solved on [AlgorithmXlr8.io](https://algorithmxlr8.io/solve-dsa/camelcase-matching).