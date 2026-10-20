# Add Digits

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given an integer `num`, repeatedly add all its digits until the result has only one digit, and return it.

 

 **Example 1:** 

```
Input: num = 38
Output: 2
Explanation: The process is
38 --> 3 + 8 --> 11
11 --> 1 + 1 --> 2 
Since 2 has only one digit, return it.

```

 **Example 2:** 

```
Input: num = 0
Output: 0

```

 

 **Constraints:** 

- 0 <= num <= 231 - 1

 

 **Follow up:**  Could you do it without any loop/recursion in `O(1)` runtime?

## Solution

**Language:** C++  
**Runtime:** 1 ms (beats 8.15%)  
**Memory:** 8.6 MB (beats 45.03%)  
**Submitted:** 2026-10-20T01:59:37.752Z  

```cpp
int solve(int n)
{
    int sum=0;
    while(n>0)
    {
        int d=n%10;
        sum+=d;
        n/=10;
    }
    return sum;
}
int len(int n) //38
{
    int c=0;
    while(n>0) //38>0
    {
        c++;
        n/=10;
    }
    return c;
}
class Solution {
public:
    int addDigits(int num) 
    {   
        int res=num; //38
        while(1)
        {
            if(len(res)<=1) //38
            {
                break;
            }
            res=solve(res);
        }
        return res;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/add-digits/)