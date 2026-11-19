# Number Complement

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

The  **complement**  of an integer is the integer you get when you flip all the `0`'s to `1`'s and all the `1`'s to `0`'s in its binary representation.

- For example, The integer 5 is "101" in binary and its complement is "010" which is the integer 2.

Given an integer `num`, return  *its complement*.

 

Original
C++
 **Example 1:** 

```
Input: num = 5
Output: 2
Explanation: The binary representation of 5 is 101 (no leading zero bits), and its complement is 010. So you need to output 2.

```

 **Example 2:** 

```
Input: num = 1
Output: 0
Explanation: The binary representation of 1 is 1 (no leading zero bits), and its complement is 0. So you need to output 0.

```

 

 **Constraints:** 

- 1 <= num < 231

 

 **Note:**  This question is the same as 1009: https://leetcode.com/problems/complement-of-base-10-integer/

## Solution

**Language:** C++  
**Runtime:** 0 ms  
**Memory:** 7.9 MB  
**Submitted:** 2026-11-19T17:00:22.133Z  

```cpp
class Solution {
public:
    int findComplement(int num) 
    {
        int res=0; //000
        int i=1;    //001
        while(i<num) //1<5
        {
            if((num&i)==1)  //101 
            {
                if(res==0)
                {
                    res=1;
                }
                else
                {
                    res<<=1;
                } 
            }
            else
            {
                res<<=1;
                res|=i;
            }
            i<<=1;
        }
        return res;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/number-complement/)