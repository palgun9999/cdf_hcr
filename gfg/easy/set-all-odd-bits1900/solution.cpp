class Solution 
{
public:
    int setAllOddBits(int n) 
    {
        int i = 0;

        while ((1 << i) <= n)
        {
            if (i % 2 == 0)
                n = n | (1 << i);

            i++;
        }

        return n;
    }
};