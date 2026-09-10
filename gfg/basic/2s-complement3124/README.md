# 2's Complement

![Difficulty](https://img.shields.io/badge/Difficulty-Basic-red)

## Problem

Given a binary string  **s**, find its 2's complement and return the result as a binary string of the same length.
The 2's complement of a binary number is obtained by first flipping all its bits (0 to 1 and 1 to 0) and then adding 1 to the resulting binary number.

 **Note:**  2's complement of 0 is always 0. 

 **Examples:** 

```
Input: s = "00000101"
Output: 11111011
Explanation: Flip all the bits to get 11111010, then add 1 to obtain 11111011.

```

```
Input: s = "0000"
Output: 0000
Explanation: Flipping all bits gives 1111. Adding 1 causes a carry to ripple through every position (1+1=10 at each bit, carrying left each time), which would normally produce a 5-bit result of 10000. But since numbers are stored in a fixed number of bits (just like a hardware register of fixed width), the overflowing carry bit simply falls off and is discarded, leaving 0000. This matches the fact that in two's complement, there is only one representation of zero - there's no separate "negative zero".
```

 **Constraints:** 
1 ≤ |s| ≤ 105

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-10T12:32:35.290Z  

```cpp
class Solution {
  public:
    string twosComplement(string s) 
    {
        
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='0')
            {
                s[i]='1';
            }
            else
            {
                s[i]='0';
            }
        }
        int i=s.length()-1;
        while(i>=0 && s[i]=='1')
        {
            s[i]='0';
            i--;
        }
        if(i>=0)
        {
            s[i]='1';
        }
        return s;
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/2s-complement3124/1)