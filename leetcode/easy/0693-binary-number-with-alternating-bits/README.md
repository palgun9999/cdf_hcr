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
**Memory:** 7.6 MB  
**Submitted:** 2026-11-23T15:39:01.870Z  

```cpp
bool check(int n)
{
    bool res=true;
    n=~n;
    while(n>0)
    {
        if((n&1)==1 && ((n>>1)&1)==1)
        {
            res=false;
        }
        n>>=1;
    }
    return res;
}
class Solution
{
public:
    bool hasAlternatingBits(int n) 
    {
        bool res=true;
        bool rest=check(n);
        while(n>0)
        {
            if((n&1)==1 && ((n>>1)&1)==1)
            {
                res=false;
            }
            n>>=1;
        }
        return res && rest;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/binary-number-with-alternating-bits/)