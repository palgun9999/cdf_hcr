class Solution {
public:
    int getCount(int x) 
    {
        int temp=x;
        int setBits =0;
        while(temp>0)
        {
            if((1&temp)==1)
            {
                setBits++;
            }
            temp>>=1;
        }
        return x - ((1 << setBits) - 1);
    }
};