# BTM22 - Rating 932

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

### MCQ - Bitwise XOR

Evaluate the following expression $00010111$ ^ $00101101$, where ^ denotes XOR operator.

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-20T10:25:48.387Z  

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

[View on CodeChef](https://www.codechef.com/problems/BTM22)