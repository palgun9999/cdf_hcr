# XOR of a Number Range

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given two integers  **l**  and  **r**, find the  **XOR**  of elements of the range [l, r].

 **Example:** 

```
Input: l = 4, r = 8 
Output: 8 
Explanation: The value of (4 ^ 5 ^ 6 ^ 7 ^ 8) = 8.
```

```
Input: l = 2, r = 4
Output: 5
Explanation: The value of (2 ^ 3 ^ 4) = 5.
```

```
Input: l = 5, r = 9
Output: 5
Explanation: The value of (5 ^ 6 ^ 7 ^ 8 ^ 9) = 5.
```

 **Constraints:** 
1 ≤ l ≤ r ≤ 109

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-23T05:26:14.175Z  

```cpp
class Solution {
  public:
  int XOR(int n)
  {
      if(n%4==0) return n;
      if(n%4==1) return 1;
      if(n%4==2) return n+1;
      return 0;
  }
    int findXOR(int l, int r) 
    {
        return XOR(r)^XOR(l-1);
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/find-xor-of-numbers-from-l-to-r/1)