class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) 
    {
        int cur=nums[0];
        vector<int> res;
        for(int i=1;i<nums.size();i++)
        {
            if(cur==nums[i])
            {
                res.push_back(cur);
                res.push_back(cur+1);
                break; 
            }
            else
            {
                cur=nums[i];
            }
        }
        return res;
    }
};