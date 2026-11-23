# Count Monobit Integers

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

You are given an integer `n`.

An integer is called  **Monobit**  if all bits in its binary representation are the same.

Return the count of  **Monobit**  integers in the range `[0, n]` (inclusive).

 

Original
C++
 **Example 1:** 

 **Input:**  n = 1

 **Output:**  2

 **Explanation:** 

- The integers in the range [0, 1] have binary representations "0" and "1".
- Each representation consists of identical bits. Thus, the answer is 2.

 **Example 2:** 

 **Input:**  n = 4

 **Output:**  3

 **Explanation:** 

- The integers in the range [0, 4] include binaries "0", "1", "10", "11", and "100".
- Only 0, 1 and 3 satisfy the Monobit condition. Thus, the answer is 3.

 

 **Constraints:** 

- 0 <= n <= 1000

## Solution

**Language:** C++  
**Runtime:** 6 ms (beats 10.74%)  
**Memory:** 8.5 MB (beats 74.83%)  
**Submitted:** 2026-11-23T11:31:54.660Z  

```cpp
class Solution {
public:
    int countMonobit(int n) 
    {
        int res=0;
        for(int i=0;i<=n;i++)
        {
            int c=0;
            int temp=i;
            while(temp>0)
            {
                if((temp&1)==0)
                {
                    c++;
                }
                temp>>=1;
            }
            if(c==0)
            {
                res++;
            }
        }
        return res;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/count-monobit-integers/)