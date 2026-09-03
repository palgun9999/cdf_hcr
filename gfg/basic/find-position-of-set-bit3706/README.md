# Position of the Set Bit

![Difficulty](https://img.shields.io/badge/Difficulty-Basic-red)

## Problem

Given an integer  **n**, determine position of the  **only set bit** (1) in its binary representation. The position is counted starting from 1 at the least significant bit (LSB).

- If n contains exactly one set bit, return its position.
- If n contains no set bits or more than one set bit, return -1.

 **Examples:** 

```
Input: n = 2
Output: 2
Explanation: 2 is represented as "10" in binary. It has only one set bit, which is at position 2.

```

```
Input: n = 5
Output: -1
Explanation: 5 is represented as "101" in binary. It has two set bits; therefore, the output is -1.

```

 **Constraints:** 
0 ≤ n ≤ 108

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-03T15:05:29.676Z  

```cpp
class Solution {
  public:
    int findPosition(int n)
    {
        int cnt=0;
        int res=-1;
        int i=0;
        while(n>0)
        { 
            i++;
            if(n & 1) 
            {
                cnt++;
                res=i;
            }
            n>>=1;
        }
        if(cnt==1)
        {
            return res;
        }
        else
        {
            return -1;
        }
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/find-position-of-set-bit3706/1)