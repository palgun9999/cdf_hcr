# BTM10 - Rating 932

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

### MCQ - Bitwise XOR Again

What can you say about the value of $C$ $=$ $A$ `^` $B$ with respect to $A$, $B$?

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-20T10:26:21.657Z  

```cpp
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int A, B;
    A = 5; // 5 = 101 in Binary
    B = 11; // 11 = 1011 in Binary

    int XOR = A ^ B; // 0101 ^ 1011

    cout << "The Bitwise XOR is: " << XOR << "\n";
    
    return 0;
}
```

---

[View on CodeChef](https://www.codechef.com/problems/BTM10)