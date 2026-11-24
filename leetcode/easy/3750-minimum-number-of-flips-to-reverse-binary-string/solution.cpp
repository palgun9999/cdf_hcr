string int_to_str(int n)
{
    string res;
    while(n>0)
    {
        if((n|1)==1)
        {
            res.push_back('1');
        }
        else
        {
            res.push_back('0');
        }
        n>>=1;
    }
    return res;
}
int str_to_int(string res)
{
    int ans=0;
    for(int i=0;i<res.size();i++)
    {
        ans<<=1;
        if(res[i]=='1')
        {
            ans|=1;
        }
        else
        {
            ans|=0;
        }
    }
    return ans;
}
class Solution {
public:
    int minimumFlips(int n) 
    {
        string res=int_to_str(n);
        int ans=str_to_int(res);
        return ans;
    }
};