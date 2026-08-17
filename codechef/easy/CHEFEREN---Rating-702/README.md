# CHEFEREN - Rating 702

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

_Description not available._

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-17T12:55:30.263Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int s,x,y,z;
        cin>>s>>x>>y>>z;
        if(s>=x+y+z)
        {
            cout<<0<<endl;
        }
        else if(s>=x+z || s>=y+z)
        {
            cout<<1<<endl;
        }
        else
        {
            cout<<2<<endl;
        }
    }
    return 0;
}

```

---

[View on CodeChef](https://www.codechef.com/problems/CHEFEREN)