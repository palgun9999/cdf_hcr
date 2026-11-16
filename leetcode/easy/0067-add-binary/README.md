# Add Binary

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given two binary strings `a` and `b`, return  *their sum as a binary string*.

 

Original
C++
 **Example 1:** 

```
Input: a = "11", b = "1"
Output: "100"

```

 **Example 2:** 

```
Input: a = "1010", b = "1011"
Output: "10101"

```

 

 **Constraints:** 

- 1 <= a.length, b.length <= 104
- a and b consist only of '0' or '1' characters.
- Each string does not contain leading zeros except for the zero itself.

## Solution

**Language:** C++  
**Runtime:** 1 ms (beats 33.27%)  
**Memory:** 8.9 MB (beats 78.98%)  
**Submitted:** 2026-11-16T04:12:31.440Z  

```cpp

class Solution {
public:
    string addBinary(string a, string b) 
    {
        string ans = "";
        int i = a.size() - 1;
        int j = b.size() - 1;
        int carry = 0;

        while(i >= 0 || j >= 0 || carry)
        {
            int sum = carry;

            if(i >= 0)
                sum += a[i--] - '0';

            if(j >= 0)
                sum += b[j--] - '0';

            ans.push_back((sum % 2) + '0');

            carry = sum / 2;
        }

        reverse(ans.begin(), ans.end());

        return ans;
    }
};

```

---

[View on LeetCode](https://leetcode.com/problems/add-binary/)