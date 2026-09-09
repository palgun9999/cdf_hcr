class Solution {
  public:
    int nextPowerOfTwo(int n) 
    {
        int i=1;
        while(i<n)
        {
            i<<=1;
        }
        return i;
    }
};