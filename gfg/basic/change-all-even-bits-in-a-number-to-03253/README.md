# Unset All Even Bits

![Difficulty](https://img.shields.io/badge/Difficulty-Basic-red)

## Problem

Given a non-negative integer  **n**, update its binary representation by changing all bits at  **even** indices to  **0**  while leaving all bits at odd indices unchanged.

 **Note:**  Indices are  **0-based**, counted from the rightmost bit.

 **Examples :** 

```
Input: n = 30
Output: 10
Explanation: The binary representation of 30 is 11110. Considering 0-based indices from the right, the bits at even indices (0, 2, and 4) are set to 0, resulting in 01010. The decimal value of 01010 is 10.
```

```
Input: n = 10
Output: 10 
Explanation: The binary representation of 10 is 1010. Considering 0-based indices from the right, the bits at even indices (0 and 2) are already 0. Therefore, the binary representation remains 1010, and the resulting value is 10.
```

 **Constraints:** 
1 ≤ n ≤ 231 - 1

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-08T16:08:40.435Z  

```cpp
class Solution {
public:
    int makeZero(int n) 
    {
        int i = 1;
        for (int j = 0; j < 31; j++) 
        {
            if (j % 2 == 0) 
            {
                n = n & ~i;
            }
            i <<= 1;
        }
        return n;
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/change-all-even-bits-in-a-number-to-03253/1)