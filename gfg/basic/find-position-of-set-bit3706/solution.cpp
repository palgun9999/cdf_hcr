class Solution {
  public:
    int findPosition(int n)
    {
        int cnt=0;
        int res=-1;
        int i=0;
        while(n>0)
        { 
            i++;
            if(n & 1) 
            {
                cnt++;
                res=i;
            }
            n>>=1;
        }
        if(cnt==1)
        {
            return res;
        }
        else
        {
            return -1;
        }
    }
};