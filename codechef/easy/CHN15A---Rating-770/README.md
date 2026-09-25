# CHN15A - Rating 770

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

_Description not available._

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-25T14:57:10.150Z  

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
        if(a<b)
        {
            cout<<"<"<<endl;
        }
        else if(a==b)
        {
            cout<<"="<<endl;
        }
        else
        {
            cout<<">"<<endl;
        }
    }
    return 0;
}

```

---

[View on CodeChef](https://www.codechef.com/problems/CHN15A)