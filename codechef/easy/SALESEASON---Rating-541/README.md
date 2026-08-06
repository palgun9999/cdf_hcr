# SALESEASON - Rating 541

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

_Description not available._

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-06T12:55:41.588Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if((a==1 && b==1 && c==0)||(a==0 && b==1 && c==1)||(a==1 && b==0 && c==1)||(a==1 && b==1 && c==1))
        {
            cout<<"Not now"<<endl;
        }
        else
        {
            cout<<"Water filling time"<<endl;
        }
    }
    return 0;
}

```

---

[View on CodeChef](https://www.codechef.com/problems/SALESEASON)