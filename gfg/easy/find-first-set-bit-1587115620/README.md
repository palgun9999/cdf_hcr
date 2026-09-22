# First Set Bit

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given an integer  **n.**  You have to return the position of the first set bit  from the  **right** side in the binary representation of the number. If there is no set bit in the integer N, then return 0 from the function.  

 **Examples:** 

```
Input: n = 18
Output: 2
Explanation: Binary representation of 18 is 010010,the first set bit from the right side is at position 2.
```

```
Input: n = 12
Output: 3 
Explanation: Binary representation of  12 is 1100, the first set bit from the right side is at position 3.

```

```
Input: n = 1
Output: 1
Explanation: Binary representation of  1 is 1, the first set bit from the right side is at position 1.
```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-22T06:00:43.344Z  

```cpp
class Solution {
  public:
    int getFirstSetBit(int n) 
    {
        int pos=0;
        while(n>0)
        {
            pos++;
            if((n&1)==1)
            {
                break;
            }
            n>>=1;
        }
        return pos;
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/find-first-set-bit-1587115620/1)