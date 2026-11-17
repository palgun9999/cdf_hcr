# CNDY - Rating 1013

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

_Description not available._

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-17T08:08:08.315Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> V(n);
        for(int i=0;i<n;i++)
        {
            cin>>V[i];
        }
        int c=0;
        for(int i=0;i<n;i++)
        {
            if(V[i]==1)
            {
                c++;
            }
        }
        if(c%2==1)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
    return 0;
}

```

---

[View on CodeChef](https://www.codechef.com/problems/CNDY)