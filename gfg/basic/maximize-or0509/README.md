# Numbers with Greater OR Value

![Difficulty](https://img.shields.io/badge/Difficulty-Basic-red)

## Problem

Given an integer **x**, count the number of integers  **a**  such that 1 ≤ a ≤ x and (a OR x) > x.

 **Examples:** 

```
Input: x = 10
Output: 7 
Explanation: In the range [1, 10] if the OR is taken of 10 and any number in the set [1, 3, 4, 5, 6, 7, 9] the resulting value will be greater than 10.

```

```
Input: x = 5
Output: 2
Explanation: In the range [1, 5] if the OR is taken of 5 and any number in the set [2, 3] the resulting value will be greater than 5.
```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-21T12:13:25.179Z  

```cpp
class Solution {
public:
    int getCount(int x) 
    {
        int temp=x;
        int setBits =0;
        while(temp>0)
        {
            if((1&temp)==1)
            {
                setBits++;
            }
            temp>>=1;
        }
        return x - ((1 << setBits) - 1);
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/maximize-or0509/1)