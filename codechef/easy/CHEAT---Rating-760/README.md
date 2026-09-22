# CHEAT - Rating 760

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

_Description not available._

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-22T05:52:41.009Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;
long long fact(int n)
{
    if(n==1||n==0)
    {
        return 1;
    }
    return n*fact(n-1);
}
int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        cout<<fact(n)<<endl;
    }
    return 0;
}

```

---

[View on CodeChef](https://www.codechef.com/problems/CHEAT)