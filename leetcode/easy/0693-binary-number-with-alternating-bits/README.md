# Binary Number with Alternating Bits

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given a positive integer, check whether it has alternating bits: namely, if two adjacent bits will always have different values.

 

Original
C++
 **Example 1:** 

```
Input: n = 5
Output: true
Explanation: The binary representation of 5 is: 101

```

 **Example 2:** 

```
Input: n = 7
Output: false
Explanation: The binary representation of 7 is: 111.
```

 **Example 3:** 

```
Input: n = 11
Output: false
Explanation: The binary representation of 11 is: 1011.
```

 

 **Constraints:** 

- 1 <= n <= 231 - 1

## Solution

**Language:** C++  
**Runtime:** 0 ms  
**Memory:** 7.8 MB  
**Submitted:** 2026-11-23T15:47:57.507Z  

```cpp
class Solution {
public:
    bool hasAlternatingBits(int n) 
    {
        int x=n^(n>>1);
        return (x&(x+1))==0;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/binary-number-with-alternating-bits/)