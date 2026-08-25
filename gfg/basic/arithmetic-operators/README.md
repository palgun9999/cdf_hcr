# Arithmetic Operators

![Difficulty](https://img.shields.io/badge/Difficulty-Basic-red)

## Problem

Given two integer variables x and y, perform the following operations:

- p: Addition of x and y
- q: Subtraction of y from x
- r: Multiplication of x and y
- s: Floating-point division of x by y
- t: Integer division of x by y
- u: Modulo (remainder when x is divided by y)

 **Examples:** 

```
Input: x = 1, y = 2
Output: 3 -1 2 0.500 0 1
Explanation: The given operations are performed:
Addition of x and y = 3
Subtraction of y from x = -1
Multiplication of x and y = 2
Floating-point division of x by y = 0.500
Integer division of x by y = 0
Modulo of x and y = 1
Hence, the output is 3 -1 2 0.500 0 1.

```

```
Input: x = 3,y = 4 
Output: 7 -1 12 0.750 0 3
Explanation: The given operations are performed.
```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-25T12:27:27.439Z  

```cpp
#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    int x, y;
    cin >> x >> y;

    // code here
    int p,q,r,t,u;
    float s;
    p=x+y;
    q=x-y;
    r=x*y;
    s=float(x)/float(y);
    t=x/y;
    u=x%y;

    cout << p << " " << q << " " << r << " " << fixed << setprecision(3) << s << " "
         << t << " " << u;

    return 0;
}
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/arithmetic-operators/1)