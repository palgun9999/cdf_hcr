# Binary Representation

![Difficulty](https://img.shields.io/badge/Difficulty-Basic-red)

## Problem

You are given an integer  **n,** you need to return its binary representation in the form of a string. String must contain  **32**  bits.

 **Examples:** 

```
Input: n = 2
Output: 00000000000000000000000000000010
Explanation: The binary representation of 2 is '10', so it can be represent as 00000000000000000000000000000010 in 32 bits.
```

```
Input: n = 5
Output: 00000000000000000000000000000101
Explanation: The binary representation of 5 is '101', so it can be represent as 00000000000000000000000000000101 in 32 bits.
```

 **Constraints:** 
1 ≤ n ≤ 109

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-07T12:21:30.663Z  

```cpp
class Solution {
  public:
    string getBinaryRep(int n) 
    {
        return bitset<32>(n).to_string();
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/binary-representation5003/1)