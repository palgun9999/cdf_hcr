class Solution {
  public:
    int findPosition(int n) 
    {
        int i=1;
        int c=0;
        while(i<=n)
        {
            c++;
            if(i==n)
            {
                return c;
            }
            i<<=1;
        }
        return -1;
    }
};