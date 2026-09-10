# Equal Sum and XOR

![Difficulty](https://img.shields.io/badge/Difficulty-Basic-red)

## Problem

Given a positive integer  **n**, count the number of integers  **i**  such that:  **0 ≤ i ≤ n**  and  **n + i = n ^ i**, where  **^**  denotes the bitwise **XOR**  operation.

Return the count of all such values of  **i**.

 **Examples:** 

```
Input: n = 7
Output: 1
Explanation: The condition holds only for i = 0.
7 + 0 = 7 ^ 0 = 7
Therefore, the answer is 1.
```

```
Input: n = 12
Output: 4
Explanation: The condition holds for: i = 0, 1, 2, 3
12 + 0 = 12 ^ 0 = 12
12 + 1 = 12 ^ 1 = 13
12 + 2 = 12 ^ 2 = 14
12 + 3 = 12 ^ 3 = 15
Therefore, the answer is 4.
```

 **Constraints:** 
1 ≤ n ≤ 103

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-10T03:00:50.738Z  

```cpp
class Solution {
  public:
    int countValues(int n) 
    {
        int i=0;
        int c=0;
        while(i<=n)
        {
            if((n+i)==(n^i))
            {
                c++;
            }
            i++;
        }
        return c;
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/equal-sum-and-xor/1)