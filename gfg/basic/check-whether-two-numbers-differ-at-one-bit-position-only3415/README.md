# Differ at One Bit

![Difficulty](https://img.shields.io/badge/Difficulty-Basic-red)

## Problem

Given two non-negative integers  **a**  and  **b**, find if their binary representations differ at exactly one bit position.

 **Examples:** 

```
Input: a = 13, b = 9
Output: true
Explanation: The binary representations of 13 (1101) and 9 (1001) differ at exactly one bit position.
```

```
Input: a = 15, b = 8
Output: false
Explanation: The binary representations of 15 (1111) and 8 (1000) differ at more than one bit position.
```

 **Constraints:** 
0 ≤ a, b ≤ 109

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-12T04:43:42.035Z  

```cpp
class Solution {
public:
    bool differOneBit(int a, int b)
    {
        int x = a ^ b;
        return x != 0 && (x & (x - 1)) == 0;
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/check-whether-two-numbers-differ-at-one-bit-position-only3415/1)