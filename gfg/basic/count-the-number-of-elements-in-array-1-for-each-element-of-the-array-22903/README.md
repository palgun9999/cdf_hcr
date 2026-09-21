# Adjacent Set Bits Check

![Difficulty](https://img.shields.io/badge/Difficulty-Basic-red)

## Problem

Given an integer  **n**, find if its binary representation contains at least one pair of adjacent set bits.

 **Examples:** 

```
Input: n = 1
Output: false 
Explanation: There is no pair of adjacent set bit in the binary representation of 1.

```

```
Input: n = 3
Output: true
Explanation: There is pair of adjacent set bit present in the binary representation of 3(0011).

```

 **Constraints:** 
1 ≤ n ≤ 109

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-21T12:28:57.791Z  

```cpp
class Solution
{
    public:
        bool adjacentBits(int n) 
        {
            bool flag=false;
            while(n>0)
            {
                if((n&1)==1 && ((n>>1)&1)==1)
                {
                    flag=true;
                    break;
                }
                n>>=1;
            }
            return flag;
        }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/count-the-number-of-elements-in-array-1-for-each-element-of-the-array-22903/1)