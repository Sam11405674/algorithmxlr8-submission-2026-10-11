<p align="center"><img src="https://algorithmxlr8.io/logo-mark.png" width="56" alt="AlgorithmXlr8.io logo" /></p>
<h3 align="center">AlgorithmXlr8.io</h3>
<p align="center"><sub>Solved and synced automatically from <a href="https://algorithmxlr8.io">AlgorithmXlr8.io</a></sub></p>

---

# Design Add and Search Words Data Structure

**Difficulty:** `Medium`

## Problem

Design a data structure that supports adding new words and finding if a string matches any previously added string.

Implement the WordDictionary class:
- WordDictionary() Initializes the object.
- void addWord(word) Adds word to the data structure, it can be matched later.
- bool search(word) Returns true if there is any string in the data structure that matches word or false otherwise. word may contain dots '.' where dots can be matched with any letter.

A match must cover the whole word: the stored word and the searched word must have the same length, and every non dot character must be equal at the same position. A prefix of a stored word does not match. Adding the same word twice has no extra effect.

Input format: the first line contains n, the number of operations. Each of the next n lines is one operation: add word, or search word.

Output format: for every search operation print true or false on its own line, in order. add prints nothing.

## Examples

### Example 1

**Input**
```
operations = [add("bad"), add("dad"), add("mad"), search("pad"), search("bad"), search(".ad"), search("b..")]
```
**Output**
```
[false,true,true,true]
```

**Explanation:** After adding "bad", "dad" and "mad": search("pad") is false because no stored word starts with p. search("bad") is true, an exact match. search(".ad") is true because the dot matches b, d or m. search("b..") is true because "bad" starts with b and has length 3.

---

Solved on [AlgorithmXlr8.io](https://algorithmxlr8.io/solve-dsa/design-add-and-search-words-data-structure).