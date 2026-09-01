# Bitwise AND of Numbers Range

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given two integers `left` and `right` that represent the range `[left, right]`, return  *the bitwise AND of all numbers in this range, inclusive*.

 

 **Example 1:** 

```
Input: left = 5, right = 7
Output: 4

```

 **Example 2:** 

```
Input: left = 0, right = 0
Output: 0

```

 **Example 3:** 

```
Input: left = 1, right = 2147483647
Output: 0

```

 

 **Constraints:** 

- 0 <= left <= right <= 231 - 1

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 11.2 MB (beats 80.19%)  
**Submitted:** 2026-09-01T13:09:19.795Z  

```cpp
class Solution {
public:
    int rangeBitwiseAnd(int left, int right)
    {
        int shift = 0;
        while(left != right)
        {
            left >>= 1;
            right >>= 1;
            shift++;
        }
        return left << shift;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/bitwise-and-of-numbers-range/)