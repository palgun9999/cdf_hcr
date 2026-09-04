class Solution {
public:
    bool isSparse(int n)
    {
        int i = 1;
        while(i < n)
        {
            if((n & i) != 0 && (n & (i << 1)) != 0)
            {
                return false;
            }
            i <<= 1;
        }
        return true;
    }
};