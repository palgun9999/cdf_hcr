# DICEGAME2 - Rating 786

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

_Description not available._

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-03T04:24:38.605Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,a,b;
        cin>>n>>a>>b;
        int res=0;
        while(n>1)
        {
            n/=2;
            res+=(a+b);
        }
        res-=b;
        cout<<res<<endl;
    }
    return 0;
}

```

---

[View on CodeChef](https://www.codechef.com/problems/DICEGAME2)