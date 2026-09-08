# BTM06 - Rating 932

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

### Bitwise AND, OR

All the Bitwise operators perform operations independently on each bit.
That is, $i$-th bit of the output isn't influenced by any bit $j$ ($j$ $\neq$ $i$) of the input.

The Bitwise  **AND**  operator - $A$ $\&$ $B$ $=$ $C$.
$i$-th bit of $C$ will be set (be equal to $1$) if and only if the $i$-th bit of $A$ and $B$ are set.

 **Example** 

```
      11001000  (200 in decimal)
    & 10111000  (184 in decimal)
      -------- 
    = 10001000  (136 in decimal)

```

The Bitwise  **OR**  operator - $A$ $|$ $B$ $=$ $C$.
$i$-th bit of $C$ will be set (be equal to $1$) if $i$-th bit of $A$ or $B$ are set.

 **Example** 

```
      11001000  (200 in decimal)
    | 10111000  (184 in decimal)
      -------- 
    = 11111000  (248 in decimal)

```

### Task

Run the code and check the output of the program. Also change the values of variables $A$ and $B$ and check the output.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-08T15:44:54.128Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int A, B;
    A = 5; // 5 = 101 in Binary
    B = 11; // 11 = 1011 in Binary

    int AND = A & B; // 0101 & 1011
    int OR = A | B; // 0101 | 1011

    cout << "The Bitwise AND is: " << (A & B) << "\n";
    cout << "The Bitwise OR is: " << (A | B) << "\n";
    
    return 0;
}
```

---

[View on CodeChef](https://www.codechef.com/problems/BTM06)