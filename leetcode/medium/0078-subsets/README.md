# Subsets

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given an integer array `nums` of  **unique**  elements, return  *all possible*   *subsets*   *(the power set)*.

The solution set  **must not**  contain duplicate subsets. Return the solution in  **any order**.

 

 **Example 1:** 

```
Input: nums = [1,2,3]
Output: [[],[1],[2],[1,2],[3],[1,3],[2,3],[1,2,3]]

```

 **Example 2:** 

```
Input: nums = [0]
Output: [[],[0]]

```

 

 **Constraints:** 

- 1 <= nums.length <= 10
- -10 <= nums[i] <= 10
- All the numbers of nums are unique.

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 10 MB (beats 37.38%)  
**Submitted:** 2026-09-01T12:23:49.607Z  

```cpp
class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) 
    {
        vector<vector<int>> res;
        int n=nums.size();
        for(int i=0;i<(1<<n);i++)
        {
            vector<int> sub;
            for(int j=0;j<n;j++)
            {
                if(i&(1LL<<j))
                {
                    sub.push_back(nums[j]);
                }
            }
            res.push_back(sub);
        }
        return res;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/subsets/)