# Parity of Set Bit Count

![Difficulty](https://img.shields.io/badge/Difficulty-Basic-red)

## Problem

Given an integer  **n**, determine parity of set bit count.

- The number has even parity if it contains an even number of set bits.
- The number has odd parity if it contains an odd number of set bits.

 **Examples:** 

```
Input: n = 13
Output: "odd"
Explanation: (13)10 = (1101)2  binary representation has three 1-bits, parity is "odd".
```

```
Input: n = 9
Output: "even"
Explanation: (9)10 = (1001)2  binary representation has two 1-bits, parity is "even".
```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-10T02:22:33.930Z  

```cpp
class Solution {
  public:
    string computeParity(int n) 
    {
        int c=0;
        while(n>0)
        {
            if(n&1==1)
            {
                c++;
            }
            n>>=1;
        }
        if(c%2==0)
        {
            return "even";
        }
        else
        {
            return "odd";
        }
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/parity-of-unsigned-integer4247/1)