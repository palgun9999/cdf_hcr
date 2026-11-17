class Solution {
public:
    int missingNumber(vector<int>& nums) 
    {
        sort(nums.begin(),nums.end());
        if(nums.size()==1 && nums[0]!=0)
        {
            return nums[0]-1;
        }
        int start=nums[0];
        int j=start-1;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=j)
            {
                return j;
            }
            j++;
        }
        return j;
    }
};