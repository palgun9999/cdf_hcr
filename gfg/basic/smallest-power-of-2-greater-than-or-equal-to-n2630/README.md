# Next Power of Two

![Difficulty](https://img.shields.io/badge/Difficulty-Basic-red)

## Problem

Given a positive integer n, find the smallest power of 2 that is greater than or equal to n. If n is already a power of 2, return n.

 **Examples:** 

```
Input: n = 5
Output: 8
Explanation: The powers of 2 around 5 are 4 and 8. Since 8 is the smallest power of 2 greater than or equal to 5, the answer is 8.
```

```
Input: n = 16
Output: 16
Explanation: 16 is already a power of 2. Hence, the answer is 16.
```

 **Constraints:** 
1<= n <=109

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-09T06:27:55.976Z  

```cpp
class Solution {
  public:
    int nextPowerOfTwo(int n) 
    {
        int i=1;
        while(i<n)
        {
            i<<=1;
        }
        return i;
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/smallest-power-of-2-greater-than-or-equal-to-n2630/1)