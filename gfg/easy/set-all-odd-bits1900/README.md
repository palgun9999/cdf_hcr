# Set All Odd Bits

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given a positive integer  **n**, set all odd-positioned bits in its binary representation and return the resulting number.

 **Note:**  The position of the least significant bit (LSB) is considered as 1.

 **Examples:** 

```
Input: n = 20
Output: 21 
Explanation: Binary representation of 20 is 10100. Setting all odd bits make the number 10101 which is binary representation of 21.

```

```
Input: n = 10
Output: 15
Explanation: Binary representation of 10 is 1010. Setting all odd bits make the number 1111 which is binary representation of 15.
```

 **Constraints:** 
1 ≤ n ≤ 109

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-12T23:58:20.038Z  

```cpp
class Solution 
{
public:
    int setAllOddBits(int n) 
    {
        int i = 0;

        while ((1 << i) <= n)
        {
            if (i % 2 == 0)
                n = n | (1 << i);

            i++;
        }

        return n;
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/set-all-odd-bits1900/1)