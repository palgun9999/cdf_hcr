class Solution 
{
    public:
        vector<string> generateBinary(int n)
        {
            vector<string> res;
            for (int i = 1; i <= n; i++)
            {
                string s;
                int num = i;
                while (num > 0)
                {
                    if (num & 1)
                        s.push_back('1');
                    else
                        s.push_back('0');
                    num >>= 1;
                }
                reverse(s.begin(), s.end());
                res.push_back(s);
            }
        return res;
    }
};
