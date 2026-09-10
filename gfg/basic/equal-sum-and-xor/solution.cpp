class Solution {
  public:
    int countValues(int n) 
    {
        int i=0;
        int c=0;
        while(i<=n)
        {
            if((n+i)==(n^i))
            {
                c++;
            }
            i++;
        }
        return c;
    }
};