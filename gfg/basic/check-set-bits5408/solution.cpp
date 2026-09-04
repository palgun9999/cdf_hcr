class Solution {
  public:
    bool isBitSet(int n) 
    {
        if(n==0)
        {
            return false;
        }
        int i=1;
        while(i<n)
        {
            if((n&i)==0)
            {
                return false;
            }
            i<<=1;
        }
        return true;
    }
};