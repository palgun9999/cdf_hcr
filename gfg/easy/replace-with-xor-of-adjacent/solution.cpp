class Solution {
  public:
    void replaceElements(vector<int>& arr) 
    {
        vector<int> temp=arr;
        int n=arr.size();
        for(int i=0;i<n;i++)
        {
            if(i==0)
            {
                arr[0]=temp[0]^temp[1];
            }
            else if(i==(n-1))
            {
                arr[n-1]=temp[n-2]^temp[n-1];
            }
            else
            {
                arr[i]=temp[i-1]^temp[i+1];
            }
        }
    }
};