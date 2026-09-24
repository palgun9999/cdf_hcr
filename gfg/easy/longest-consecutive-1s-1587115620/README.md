# Longest Consecutive 1's

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given a number  **n.** Find the length of the longest consecutive 1s in its binary representation.

 **Examples:** 

```
Input: n = 14
Output: 3
Explanation: Binary representation of 14 is 1110, in which 111 is the longest consecutive set bits of length is 3.
```

```
Input: n = 222
Output: 4
Explanation: Binary representation of 222 is 11011110, in which 1111 is the longest consecutive set bits of length 4. 

```

 **Constraints :** 
 1  ≤ n ≤ 109

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-24T08:58:11.940Z  

```cpp
class Solution {
  public:
    int maxConsecutiveOnes(int n) 
    {
        vector<int> maxs;
        int t=0;
        while(n>0)
        {
            if((n&1)==0)
            {
                maxs.push_back(t);
                t=0;
                n>>=1;
                continue;
            }
            t++;
            n>>=1;
        }
        maxs.push_back(t);
        int mx=*max_element(maxs.begin(),maxs.end());
        return mx;
    }
};

```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/longest-consecutive-1s-1587115620/1)