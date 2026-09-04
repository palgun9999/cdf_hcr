# Sparse Number

![Difficulty](https://img.shields.io/badge/Difficulty-Basic-red)

## Problem

Given a number  **n**. You have to check whether it is sparse or not.
 **Note:** A number is said to be a sparse number if no two or more consecutive bits are set in the binary representation.

 **Examples :** 

```
Input: n = 2
Output: true
Explanation: Binary Representation of 2 is 10, which is not having consecutive set bits. So, it is sparse number.
```

```
Input: n = 3
Output: false
Explanation: Binary Representation of 3 is 11, which is having consecutive set bits in it. So, it is not a sparse number.
```

 **Constraints:** 
1 ≤ n ≤ 106

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-04T12:55:09.567Z  

```cpp
class Solution {
public:
    bool isSparse(int n)
    {
        int i = 1;
        while(i < n)
        {
            if((n & i) != 0 && (n & (i << 1)) != 0)
            {
                return false;
            }
            i <<= 1;
        }
        return true;
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/number-is-sparse-or-not-1587115620/1)