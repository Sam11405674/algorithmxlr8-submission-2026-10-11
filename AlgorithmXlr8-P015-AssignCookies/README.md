<p align="center"><img src="https://algorithmxlr8.io/logo-mark.png" width="56" alt="AlgorithmXlr8.io logo" /></p>
<h3 align="center">AlgorithmXlr8.io</h3>
<p align="center"><sub>Solved and synced automatically from <a href="https://algorithmxlr8.io">AlgorithmXlr8.io</a></sub></p>

---

# Assign Cookies

**Difficulty:** `Easy`

## Problem

Assume you are an awesome parent and want to give your children some cookies. But, you should give each child at most one cookie.

Each child i has a greed factor g[i], which is the minimum size of a cookie that the child will be content with; and each cookie j has a size s[j]. If s[j] >= g[i], we can assign the cookie j to the child i, and the child i will be content. Your goal is to maximize the number of your content children and output the maximum number.

Each cookie can be given to at most one child. A cookie smaller than a child's greed factor does not make that child content. Some children may get no cookie, and some cookies may stay unused.

Input format: the first line contains two integers, the number of children (the length of g) and the number of cookies (the length of s). The second line contains the greed factors g separated by spaces. The third line contains the cookie sizes s separated by spaces (it is empty when there are no cookies).

Output format: print a single integer, the maximum number of content children.

## Examples

### Example 1

**Input**
```
g = [1,2,3], s = [1,1]
```
**Output**
```
1
```

**Explanation:** You have 3 children and 2 cookies. The greed factors of the children are 1, 2 and 3. Both cookies have size 1, so you can only make the child whose greed factor is 1 content. You need to output 1.

### Example 2

**Input**
```
g = [1,2], s = [1,2,3]
```
**Output**
```
2
```

**Explanation:** You have 2 children and 3 cookies. The greed factors are 1 and 2, and you have cookies big enough for both of them (for example sizes 1 and 2), so you can make both children content. You need to output 2.

---

Solved on [AlgorithmXlr8.io](https://algorithmxlr8.io/solve-dsa/assign-cookies).