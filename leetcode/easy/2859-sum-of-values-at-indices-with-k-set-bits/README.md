# Sum of Values at Indices With K Set Bits

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

You are given a  **0-indexed**  integer array `nums` and an integer `k`.

Return  *an integer that denotes the  **sum**  of elements in* `nums` *whose corresponding  **indices**  have  **exactly*** `k` *set bits in their binary representation.* 

The  **set bits**  in an integer are the `1`'s present when it is written in binary.

- For example, the binary representation of 21 is 10101, which has 3 set bits.

 

Original
C++
 **Example 1:** 

```
Input: nums = [5,10,1,5,2], k = 1
Output: 13
Explanation: The binary representation of the indices are: 
0 = 0002
1 = 0012
2 = 0102
3 = 0112
4 = 1002 
Indices 1, 2, and 4 have k = 1 set bits in their binary representation.
Hence, the answer is nums[1] + nums[2] + nums[4] = 13.
```

 **Example 2:** 

```
Input: nums = [4,3,2,1], k = 2
Output: 1
Explanation: The binary representation of the indices are:
0 = 002
1 = 012
2 = 102
3 = 112
Only index 3 has k = 2 set bits in its binary representation.
Hence, the answer is nums[3] = 1.

```

 

 **Constraints:** 

- 1 <= nums.length <= 1000
- 1 <= nums[i] <= 105
- 0 <= k <= 10

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 25.8 MB (beats 63.93%)  
**Submitted:** 2026-11-18T03:23:21.221Z  

```cpp
int nbits(int n)
{
    int cnt=0;
    while(n>0)
    {
        if((n&1)==1)
        {
            cnt++;
        }
        n>>=1;
    }
    return cnt;
}
class Solution {
public:
    int sumIndicesWithKSetBits(vector<int>& nums, int k) 
    {
        int res=0;
        int bit=(1<<k); //
        for(int i=0;i<nums.size();i++)
        {
            if(nbits(i)==k)
            {
                res+=nums[i];
            }
        }
        return res;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/sum-of-values-at-indices-with-k-set-bits/)