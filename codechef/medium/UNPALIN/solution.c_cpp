#include <bits/stdc++.h>
using namespace std;
int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;
    while (T--) 
    {
        int N;
        cin >> N;
        vector<int> A(N);
        for (int i = 0; i < N; i++)
            cin >> A[i];
        bool palindrome = true;
        for (int i = 0, j = N - 1; i < j; i++, j--)
        {
            if (A[i] != A[j]) 
            {
                palindrome = false;
                break;
            }
        }
        if (palindrome)
        {
            cout << "NO\n";
        } else 
        {
            cout << "YES " << (N + 1) << "\n";
        }
    }
    return 0;
}