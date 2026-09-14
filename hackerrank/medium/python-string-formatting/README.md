# Designer Door Mat

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given an integer, $n$, print the following values for each integer $i$ from $1$ to $n$:

1. Decimal
2. Octal
3. Hexadecimal (capitalized)
4. Binary

**Function Description**   

Complete the *print_formatted* function in the editor below.   

*print_formatted* has the following parameters:   

-	*int number:* the maximum value to print  

**Prints**   

The four values must be printed on a single line *in the order specified above* for each $i$ from $1$ to $number$. Each value should be space-padded to match the width of the *binary* value of $number$ and the values should be separated by a single space.

**Input Format**

A single integer denoting $n$.

**Constraints**

- $1 \le n \le 99$

**Output Format**

## Solution

**Language:** Python  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-14T11:13:52.569Z  

```py
# Enter your code here. Read input from STDIN. Print output to STDOUT
n, m = map(int, input().split())

for i in range(1, n, 2):
    print(('.|.' * i).center(m, '-'))

print('WELCOME'.center(m, '-'))

for i in range(n - 2, 0, -2):
    print(('.|.' * i).center(m, '-'))

```

---

[View on HackerRank](https://www.hackerrank.com/challenges/python-string-formatting/problem)