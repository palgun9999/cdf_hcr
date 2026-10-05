# PRB01 - Rating 793

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

_Description not available._

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-05T16:56:24.963Z  

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
        vector<string> code(n);
        int st=0,lt=0;
        for(int i=0;i<n;i++)
        {
            cin>>code[i];
            if(code[i]=="START38")
            {
                st++;
            }
            else
            {
                lt++;
            }
        }
        cout<<st<<" "<<lt<<endl;
    }
    return 0;
}

```

---

[View on CodeChef](https://www.codechef.com/problems/PRB01)