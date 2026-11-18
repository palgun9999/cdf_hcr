# TAPTAP

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Tap Tap

A rhythm game has $N$ notes, that appear at times $A_1 \lt A_2 \lt \ldots \lt A_N$.
Each note must be tapped exactly at its time, with either the left or the right finger. After a finger taps a note, it cannot tap another note until  **at least**  $G$ units of time have passed.
Both fingers are free at the start.

Count the number of ways to assign a finger to every note so that all notes can be tapped.
Two assignments are different if some note is tapped by a different finger.

Since the answer can be large, output it modulo $998244353$.

### Input Format
- The first line of input will contain a single integer $T$, denoting the number of test cases.
- Each test case consists of two lines of input. The first line of each test case contains two space-separated integers $N$ and $G$ — the number of notes and the cooldown of a finger. The second line contains $N$ space-separated integers $A_1, A_2, \ldots, A_N$ — the times of the notes.
### Output Format

For each test case, output on a new line the number of valid assignments, modulo $998244353$.

### Constraints
- $1 \leq T \leq 10^5$
- $3 \leq N \leq 2 \cdot 10^5$
- $1 \leq G \leq 10^9$
- $1 \leq A_1 \lt A_2 \lt \ldots \lt A_N \leq 10^9$
- The sum of $N$ over all test cases does not exceed $2 \cdot 10^5$.
### Sample 1:
Input
Output

```
3
3 2
3 4 5
4 3
1 4 5 6
5 3
1 2 5 7 9

```

```
2
0
4

```

### Explanation:

 **Test case $1$:**  Consecutive notes are only $1$ unit of time apart, so the fingers must alternate. Starting with either finger works, giving $2$ assignments.

 **Test case $2$:**  Suppose some finger taps the note at time $4$. Then, $G = 3$ so it becomes free only at time $7$.
Thus, the other finger is forced to tap the note at $5$; and will only become free at time $8$.
This leaves no finger free to tap the note at time $6$.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-18T15:02:47.652Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

const long long MOD = 998244353;

void solve()
{
    int n;
    long long g;
    cin >> n >> g;

    vector<long long> a(n);

    for(int i = 0; i < n; i++)
        cin >> a[i];

    vector<long long> dp(n, 0);

    dp[0] = 2;

    for(int i = 1; i < n; i++)
    {
        if(a[i] - a[i - 1] < g)
            dp[i] = dp[i - 1];
        else
            dp[i] = (2 * dp[i - 1]) % MOD;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--)
        solve();

    return 0;
}
```

---

[View on CodeChef](https://www.codechef.com/problems/TAPTAP)