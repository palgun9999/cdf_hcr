const int N = 4000001;
vector<bool> sa(N, true);
bool sieveBuilt = false;

void sive()
{
    sa[0] = false;
    sa[1] = false;
    for (int i = 2; (long long)i * i < N; i++)
    {
        if (sa[i])
        {
            for (int j = i * i; j < N; j += i)
            {
                sa[j] = false;
            }
        }
    }
}

class Solution {
public:
    Solution() {
        if (!sieveBuilt) {
            sive();
            sieveBuilt = true;
        }
    }
    
    int diagonalPrime(vector<vector<int>>& nums) 
    {
        int la = 0;
        int c = 0;
        int n = nums.size();
        
        for (int i = 0; i < n; i++)
        {
            if (sa[nums[i][i]])
            {
                c++;
                la = max(la, nums[i][i]);
            }
            int j = n - 1 - i;
            if (j != i && sa[nums[i][j]])
            {
                c++;
                la = max(la, nums[i][j]);
            }
        }
        if (c == 0)
        {
            return 0;
        }
        return la;
    }
};