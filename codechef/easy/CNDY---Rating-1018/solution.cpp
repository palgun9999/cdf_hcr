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
        vector<int> V(2*n);
        for(int i=0;i<2*n;i++)
        {
            cin>>V[i];
        }
        map<int,int> A;
        for(int i=0;i<n;i++)
        {
            if(A.find(V[i])!=A.end())
            {
                A[V[i]]++;
            }
            else
            {
                A[V[i]]=1;
            }
        }
        bool flag=true;
        for(auto it : A)
        {
            if(it.second>=2)
            {
                flag=false;
            }
        }
        if(flag)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
