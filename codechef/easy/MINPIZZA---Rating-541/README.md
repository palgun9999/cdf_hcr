# MINPIZZA - Rating 541

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

_Description not available._

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-06T13:04:04.599Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int x;
        cin>>x;
        if(x<=100)
        {
            cout<<x<<endl;
        }
        else if(x>100 && x<=1000)
        {
            cout<<x-25<<endl;
        }
        else if(x>1000 && x<=5000)
        {
            cout<<x-100<<endl;
        }
        else
        {
            cout<<x-500<<endl;
        }
    }
    return 0;
}

```

---

[View on CodeChef](https://www.codechef.com/problems/MINPIZZA)