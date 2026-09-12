class Solution {
  public:
    int findOR(vector<int>& arr, int x) 
    {
        vector<int> muls;
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]%x==0)
            {
                muls.push_back(arr[i]);
            }
        }
        int res=0;
        for(int i=0;i<muls.size();i++)
        {
            res|=muls[i];
        }
        return res;
    }
};