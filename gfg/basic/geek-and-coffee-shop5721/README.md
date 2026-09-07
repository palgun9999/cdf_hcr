# Repeated Integer Division by 2

![Difficulty](https://img.shields.io/badge/Difficulty-Basic-red)

## Problem

Given two integers  **n**  and  **m**, halve n exactly m - 1 times using integer division. Return the resulting value.

 **Examples:** 

```
Input: n = 100, m = 4
Output: 12
Explanation: The sequence of numbers is 100, 50, 25, 12.
```

```
Input: n = 10, m = 5
Output: 0
Explanation: The sequence is 10, 5, 2, 1 and 0.
```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-07T12:31:54.808Z  

```cpp
class Solution {
  public:
    int mthHalf(int n, int m) 
    {
        return n>>m-1;
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/geek-and-coffee-shop5721/1)