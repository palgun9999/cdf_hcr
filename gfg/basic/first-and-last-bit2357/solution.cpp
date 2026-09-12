class Solution 
{
    public:
        bool areSet(int n) {
            if ((n & 1) == 0)
                return false;
            int x = n >> 1;
            while (x > 1)
            {
                if (x & 1)
                    return false;
                x >>= 1;
            }
            return true;
    }
};