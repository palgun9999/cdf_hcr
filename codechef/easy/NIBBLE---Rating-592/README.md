# NIBBLE - Rating 592

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

_Description not available._

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-10T12:55:10.270Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        if(a/0.1>b/0.2)
        {
            cout<<"FIRST"<<endl;
        }
        else if(a/0.1==b/0.2)
        {
            cout<<"ANY"<<endl;
        }
        else
        {
            cout<<"SECOND"<<endl;
        }
    }
    return 0;
}

```

---

[View on CodeChef](https://www.codechef.com/problems/NIBBLE)