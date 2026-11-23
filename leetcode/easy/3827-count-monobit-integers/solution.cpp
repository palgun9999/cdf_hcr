class Solution {
public:
    int countMonobit(int n) 
    {
        int res=0;
        for(int i=0;i<=n;i++)
        {
            int c=0;
            int temp=i;
            while(temp>0)
            {
                if((temp&1)==0)
                {
                    c++;
                }
                temp>>=1;
            }
            if(c==0)
            {
                res++;
            }
        }
        return res;
    }
};