class Solution {
  public:
    string twosComplement(string s) 
    {
        
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='0')
            {
                s[i]='1';
            }
            else
            {
                s[i]='0';
            }
        }
        int i=s.length()-1;
        while(i>=0 && s[i]=='1')
        {
            s[i]='0';
            i--;
        }
        if(i>=0)
        {
            s[i]='1';
        }
        return s;
    }
};