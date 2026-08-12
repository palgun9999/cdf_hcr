# Number of Even and Odd Bits

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

You are given a  **positive**  integer `n`.

Let `even` denote the number of even indices in the binary representation of `n` with value 1.

Let `odd` denote the number of odd indices in the binary representation of `n` with value 1.

Note that bits are indexed from  **right to left**  in the binary representation of a number.

Return the array `[even, odd]`.

 

 **Example 1:** 

 **Input:**  n = 50

 **Output:**  [1,2]

 **Explanation:** 

The binary representation of 50 is `110010`.

It contains 1 on indices 1, 4, and 5.

 **Example 2:** 

 **Input:**  n = 2

 **Output:**  [0,1]

 **Explanation:** 

The binary representation of 2 is `10`.

It contains 1 only on index 1.

 

 **Constraints:** 

- 1 <= n <= 1000

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 9.5 MB (beats 20.97%)  
**Submitted:** 2026-08-12T00:22:56.492Z  

```cpp
class Solution {
public:
    vector<int> evenOddBit(int n) {
        int even = 0, odd = 0;
        int index = 0;

        while (n > 0) {
            if (n & 1) {
                if (index % 2 == 0)
                    even++;
                else
                    odd++;
            }
            n >>= 1;
            index++;
        }

        return {even, odd};
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/number-of-even-and-odd-bits/)