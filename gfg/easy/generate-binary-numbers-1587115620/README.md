# Generate Binary Numbers

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given a number  **n**, generate all  **binary numbers** with decimal values from 1 to n.

 **Examples:** 

```
Input: n = 4
Output: ["1", "10", "11", "100"]
Explanation: Binary numbers from 1 to 4 are 1, 10, 11 and 100.

```

```
Input: n = 6
Output: ["1", "10", "11", "100", "101", "110"]
Explanation: Binary numbers from 1 to 6 are 1, 10, 11, 100, 101 and 110.
```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-20T12:42:41.539Z  

```cpp
class Solution 
{
    public:
        vector<string> generateBinary(int n)
        {
            vector<string> res;
            for (int i = 1; i <= n; i++)
            {
                string s;
                int num = i;
                while (num > 0)
                {
                    if (num & 1)
                        s.push_back('1');
                    else
                        s.push_back('0');
                    num >>= 1;
                }
                reverse(s.begin(), s.end());
                res.push_back(s);
            }
        return res;
    }
};

```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/generate-binary-numbers-1587115620/1)