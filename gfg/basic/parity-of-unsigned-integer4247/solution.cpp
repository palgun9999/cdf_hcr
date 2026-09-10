class Solution {
  public:
    string computeParity(int n) 
    {
        int c=0;
        while(n>0)
        {
            if(n&1==1)
            {
                c++;
            }
            n>>=1;
        }
        if(c%2==0)
        {
            return "even";
        }
        else
        {
            return "odd";
        }
    }
};