# CHOPRT - Rating 769

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

_Description not available._

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-25T14:53:48.146Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int r,o,c;
    cin>>r>>o>>c;
    int req=r-c;
    int rem=20-o;
    int can=rem*6*6;
    if(can>req)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}

```

---

[View on CodeChef](https://www.codechef.com/problems/CHOPRT)