# Bitwise OR of a Binary Array

![Difficulty](https://img.shields.io/badge/Difficulty-Basic-red)

## Problem

You are given a binary array  **arr[]**, return the bitwise OR of all elements in the array.

The OR operation follows the truth table below:

 **Examples:** 

```
Input: arr[] = [1, 1, 1, 0]
Output: 1
Explanation:
1 | 1 = 1
1 | 1 = 1
1 | 0 = 1
Hence output is 1.
```

```
Input: arr[] = [0, 0, 1, 0]
Output: 1
Explanation:
0 | 0 = 0
0 | 1 = 1
1 | 0 = 1
Hence output is 1  
```

 **Constraints:** 
1 ≤ arr.size() ≤ 1000

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-10T02:28:15.894Z  

```cpp
class Solution {
  public:
    int orGate(vector<int> &arr) 
    {
        int res=arr[0];
        for(int i=1;i<arr.size();i++)
        {
            res|=arr[i];
        }
        return res;
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/the-or-gate3122/1)