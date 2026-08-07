# TRUESCORE - Rating 571

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

_Description not available._

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-07T13:14:30.589Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        if(x<y)
        {
            cout<<"BIKE"<<endl;
        }
        else if(x==y)
        {
            cout<<"SAME"<<endl;
        }
        else 
        {
            cout<<"CAR"<<endl;
        }
    }
    return 0;
}

```

---

[View on CodeChef](https://www.codechef.com/problems/TRUESCORE)