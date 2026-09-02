class Solution {
public:
    int countBitsFlip(int a, int b) 
    {
        int x = a ^ b;
        int c = 0;

        while(x)
        {
            c += x & 1;
            x >>= 1;
        }

        return c;
    }
};