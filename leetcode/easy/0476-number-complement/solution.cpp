class Solution {
public:
    int findComplement(int num) 
    {
        int res=0;
        int i=1;
        while(i<num)
        {
            if((num&1)==1)
            {
                res<<=1;
            }
            else
            {
                res<<=1;
                res|=1;
            }
            i<<=1;
        }
        return res;
    }
};