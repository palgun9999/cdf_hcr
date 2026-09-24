class Solution {
  public:
    int maxConsecutiveOnes(int n) 
    {
        vector<int> maxs;
        int t=0;
        while(n>0)
        {
            if((n&1)==0)
            {
                maxs.push_back(t);
                t=0;
                n>>=1;
                continue;
            }
            t++;
            n>>=1;
        }
        maxs.push_back(t);
        int mx=*max_element(maxs.begin(),maxs.end());
        return mx;
    }
};
