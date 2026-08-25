class Solution {
  public:
    int sumOfSeries(int n) 
    {
        int res=0;
        for(int i=1;i<=n;i++)
        {
            res+=i*i*i;
        }
        return res;
    }
};