# Only LSB and MSB Set

![Difficulty](https://img.shields.io/badge/Difficulty-Basic-red)

## Problem

Given a positive integer  **n**, find whether the binary representation of n has only the most significant bit (MSB) and the least significant bit (LSB) set.

 **Examples:** 

```
Input: n = 9
Output: true
Explanation: (9)10 = (1001)2, only the first and last bits are set.
```

```
Input: n = 15
Output: false
Explanation: (15)10 = (1111)2, except first and last there are other bits also which are set.
```

 **Constraints:** 
1 ≤ n ≤ 109

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-12T09:24:02.826Z  

```cpp
class Solution 
{
    public:
        bool areSet(int n) {
            if ((n & 1) == 0)
                return false;
            int x = n >> 1;
            while (x > 1)
            {
                if (x & 1)
                    return false;
                x >>= 1;
            }
            return true;
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/first-and-last-bit2357/1)