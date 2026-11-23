bool check(int n)
{
    bool res=true;
    n=~n;
    while(n>0)
    {
        if((n&1)==1 && ((n>>1)&1)==1)
        {
            res=false;
        }
        n>>=1;
    }
    return res;
}
class Solution
{
public:
    bool hasAlternatingBits(int n) 
    {
        bool res=true;
        bool rest=check(n);
        while(n>0)
        {
            if((n&1)==1 && ((n>>1)&1)==1)
            {
                res=false;
            }
            n>>=1;
        }
        return res && rest;
    }
};