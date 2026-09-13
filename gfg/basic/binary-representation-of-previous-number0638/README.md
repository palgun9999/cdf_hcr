# Binary Representation of Previous

![Difficulty](https://img.shields.io/badge/Difficulty-Basic-red)

## Problem

Given a binary representation in the form of string  **s**  of a number  **n**, the task is to find a binary representation of  **n-1**.

- There can be leading 0's in the input, but output should not have any leading 0s.
- In case output is 0, it should be represented as single 0 or "0".

 **Note:**  n is greater than zero.

 **Examples :** 

```
Input: s = "11"
Output: 10
Explanation: "11" is the binary representation of 3 so, binary representation of 2 is "10".
```

```
Input: s = "1000"
Output: 111
Explanation: "1000" is the binary representation of 8 so, binary representation of 7 is "111".
```

```
Input: s = "0011"
Output: 10
Explanation: After removing extra 0s, we get "11"  which is binary representation of 3 so, binary representation of 2 is "10".
```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-13T16:24:25.072Z  

```cpp
class Solution {
public:
    string binaryPreviousNumber(string s) 
    {
        int i = 0;
        while (i < s.size() && s[i] == '0')
            i++;
        s = s.substr(i);
        if (s == "1")
            return "0";
        i = s.size() - 1;
        while (s[i] == '0') 
        {
            s[i] = '1';
            i--;
        }
        s[i] = '0';
        i = 0;
        while (i < s.size() && s[i] == '0')
            i++;
        return s.substr(i);
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/binary-representation-of-previous-number0638/1)