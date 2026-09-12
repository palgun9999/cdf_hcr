# Check for Alternate Bits

![Difficulty](https://img.shields.io/badge/Difficulty-Basic-red)

## Problem

Given a non negative integer n, check whether its binary representation consists of alternating bits. 

 **Examples :** 

```
Input: n = 12
Output: false
Explanation: n = 12 = "1100". Hence there is no alternate pattern.
```

```
Input: n = 10
Output: true
Explanation: n = 10 = "1010". Hence n has an alternate pattern.
```

 **Constraints:** 
0 ≤ n ≤ 109

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-12T09:35:08.698Z  

```cpp
class Solution 
{
public:
    bool alternateBits(int n) 
    {
        while (n > 0)
        {
            int a = n & 1;
            int b = (n >> 1) & 1;

            if (a == b)
                return false;

            n >>= 1;
        }
        return true;
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/product-of-digits4348/1)