# Set Mismatch

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

You have a set of integers `s`, which originally contains all the numbers from `1` to `n`. Unfortunately, due to some error, one of the numbers in `s` got duplicated to another number in the set, which results in  **repetition of one**  number and  **loss of another**  number.

You are given an integer array `nums` representing the data status of this set after the error.

Find the number that occurs twice and the number that is missing and return  *them in the form of an array*.

 

Original
C++
 **Example 1:** 

```
Input: nums = [1,2,2,4]
Output: [2,3]

```

 **Example 2:** 

```
Input: nums = [1,1]
Output: [1,2]

```

 

 **Constraints:** 

- 2 <= nums.length <= 104
- 1 <= nums[i] <= 104

## Solution

**Language:** C++  
**Runtime:** 0 ms  
**Memory:** 8.2 MB  
**Submitted:** 2026-11-20T17:10:58.773Z  

```cpp
class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) 
    {
        int cur=nums[0];
        vector<int> res;
        for(int i=1;i<nums.size();i++)
        {
            if(cur==nums[i])
            {
                res.push_back(cur);
                res.push_back(cur+1);
                break; 
            }
            else
            {
                cur=nums[i];
            }
        }
        return res;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/set-mismatch/)