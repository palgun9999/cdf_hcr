int solve(int n)
{
    int sum=0;
    while(n>0)
    {
        int d=n%10;
        sum+=d;
        n/=10;
    }
    return sum;
}
int len(int n)
{
    int c=0;
    while(n>0)
    {
        c++;
        n/=10;
    }
    return c;
}
class Solution {
public:
    int addDigits(int num) 
    {   
        int res=num;
        while(1)
        {
            if(len(res)<=1)
            {
                break;
            }
            res=solve(res);
        }
        return res;
    }
};