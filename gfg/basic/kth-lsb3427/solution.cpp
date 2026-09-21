class Solution {
  public:
    int kthLSB(int n, int k) 
    {
        return (n>>(k-1))&1;
    }
};