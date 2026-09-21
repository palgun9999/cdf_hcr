class Solution
{
    public:
        bool adjacentBits(int n) 
        {
            bool flag=false;
            while(n>0)
            {
                if((n&1)==1 && ((n>>1)&1)==1)
                {
                    flag=true;
                    break;
                }
                n>>=1;
            }
            return flag;
        }
};