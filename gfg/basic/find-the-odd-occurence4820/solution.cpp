class Solution {
  public:
    int getOddOccurrence(vector<int>& arr)
    {
        int res=0;
        for(int i=0;i<arr.size();i++)
        {
            res^=arr[i];
        }
        return res;
    }
};