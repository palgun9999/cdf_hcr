class Solution {
public:
    int sumIndicesWithKSetBits(vector<int>& nums, int k) 
    {
        int res=0;
        int bit=(1<<k);
        for(int i=0;i<nums.size();i++)
        {
            if((i&bit)==1)
            {
                res+=nums[i];
            }
        }
        return res;
    }
};