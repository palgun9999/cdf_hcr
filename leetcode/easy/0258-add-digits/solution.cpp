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
int len(int n) //38
{
    int c=0;
    while(n>0) //38>0
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
        int res=num; //38
        while(1)
        {
            if(len(res)<=1) //38
            {
                break;
            }
            res=solve(res);
        }
        return res;
    }
};