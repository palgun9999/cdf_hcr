# Exactly One Consecutive Set Bits Pair

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

You are given an integer `n`.

Return `true` if its binary representation contains  **exactly one adjacent pair**  of set bits, and `false` otherwise.

 

Original
C++
 **Example 1:** 

 **Input:**  n = 6

 **Output:**  true

 **Explanation:** 

- Binary representation of 6 is 110.
- There is exactly one adjacent pair of set bits ("11"). Thus, the answer is true​​​​​​​.

 **Example 2:** 

 **Input:**  n = 5

 **Output:**  false

 **Explanation:** 

- Binary representation of 5 is 101.
- There is no adjacent pair of set bits. Thus, the answer is false​​​​​​​.

 

 **Constraints:** 

- 0 <= n <= 105

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 7.8 MB (beats 51.97%)  
**Submitted:** 2026-11-21T01:40:57.667Z  

```cpp
class Solution {
public:
    bool consecutiveSetBits(int n) 
    {
        int c=0;
        while(n>0)
        {
            if((n&1)==1 && ((n>>1)&1)==1)
            {
                c++;
            }
            n>>=1;
        }    
        return c==1;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/exactly-one-consecutive-set-bits-pair/)