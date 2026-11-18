int nbits(int n)
{
    int cnt=0;
    while(n>0)
    {
        if((n&1)==1)
        {
            cnt++;
        }
        n>>=1;
    }
    return cnt;
}
class Solution {
public:
    int sumIndicesWithKSetBits(vector<int>& nums, int k) 
    {
        int res=0;
        int bit=(1<<k); //
        for(int i=0;i<nums.size();i++)
        {
            if(nbits(i)==k)
            {
                res+=nums[i];
            }
        }
        return res;
    }
};