# BTM08 - Rating 932

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

### The XOR Operator

The Bitwise  **XOR**  operator - $A$ $\oplus$ $B$ $=$ $C$.
$i$-th bit of $C$ will be set (be equal to $1$) if and only if the $i$-th bit of $A$ and $B$ are different (one is $1$ and other is $0$).
The xor operator is represent as `^` in programming code.

Alternatively you can view the XOR operator as - if the $i$-th bit of $B$ is $1$ then, the $i$-bit of the output will be $i$-th bit of $A$ flipped, else it will be same as the $i$-th bit of $A$.

Flipping a bit means to change the bit from $1$ to $0$ or $0$ to $1$.

 **Example** 

```
      11001000  (200 in decimal)
    ^ 10111000  (184 in decimal)
      -------- 
    = 01110000  (112 in decimal)

```

### Task

Run the code and check the output of the program. Also change the values of variables $A$ and $B$ and check the output.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-20T10:24:13.190Z  

```c_cpp
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

[View on CodeChef](https://www.codechef.com/problems/BTM08)