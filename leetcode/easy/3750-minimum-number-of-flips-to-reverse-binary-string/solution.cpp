class Solution {
public:
    int minimumFlips(int n) 
    {
        int res=0;
        while(res<n)
        {
            res<<=1;
            res|=(n|1);
        }
        return res;
    }
};