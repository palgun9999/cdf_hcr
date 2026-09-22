class Solution {
  public:
    int setBits(int n) 
    {
        int c;
        while(n>0)
        {
            if((n&1)==1)
            {
                c++;
            }
            n>>=1;
        }
        return c;
    }
};