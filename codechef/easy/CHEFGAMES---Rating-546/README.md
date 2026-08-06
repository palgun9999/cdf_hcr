# CHEFGAMES - Rating 546

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

_Description not available._

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-06T13:11:13.599Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int nx=n*x;
        int c=0;
        while(nx>0)
        {
            c++;
            nx-=4;
        }
        cout<<c<<endl;
    }
    return 0;
}

```

---

[View on CodeChef](https://www.codechef.com/problems/CHEFGAMES)