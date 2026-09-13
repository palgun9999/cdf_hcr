class Solution {
public:
    string binaryPreviousNumber(string s) 
    {
        int i = 0;
        while (i < s.size() && s[i] == '0')
            i++;
        s = s.substr(i);
        if (s == "1")
            return "0";
        i = s.size() - 1;
        while (s[i] == '0') 
        {
            s[i] = '1';
            i--;
        }
        s[i] = '0';
        i = 0;
        while (i < s.size() && s[i] == '0')
            i++;
        return s.substr(i);
    }
};