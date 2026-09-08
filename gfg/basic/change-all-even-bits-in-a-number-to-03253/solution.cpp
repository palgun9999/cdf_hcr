class Solution {
public:
    int makeZero(int n) 
    {
        int i = 1;
        for (int j = 0; j < 31; j++) 
        {
            if (j % 2 == 0) 
            {
                n = n & ~i;
            }
            i <<= 1;
        }
        return n;
    }
};