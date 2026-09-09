class Solution {
  public:
    int onesComplement(int n) 
    {
        int ma=0;
        int temp=n;
        while(temp>0)
        {
            ma=(ma<<1)|1;
            temp>>=1;
        }
        return (~n)&ma;
    }
};