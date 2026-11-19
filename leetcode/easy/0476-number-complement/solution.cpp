class Solution {
public:
    int findComplement(int num) 
    {
        int res=0;
        int i=1;
        while(i<num)
        {
            if((num&i)==1)
            {
                res<<=1;
            }
            else
            {
                res<<=1;
                res|=i;
            }
            i<<=1;
        }
        return res;
    }
};