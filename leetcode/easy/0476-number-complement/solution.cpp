class Solution {
public:
    int findComplement(int num) 
    {
        int res=0; //000
        int i=1;    //001
        while(i<num) //1<5
        {
            if((num&i)==1)  //101 
            {
                if(res==0)
                {
                    res=1;
                }
                else
                {
                    res<<=1;
                } 
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