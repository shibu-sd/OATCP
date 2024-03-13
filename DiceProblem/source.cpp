#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

int main()
{
    int tc;
    cin >> tc;

    while (tc--)
    {
        int n;
        cin >> n;

        if (n < 0)
        {
            cout << "Number of ways : " << 0 << '\n';
            continue;
        }

        vector<int> dp(n + 1);
        dp[0] = 1;

        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= 6; j++)
            {
                if (i - j >= 0)
                    (dp[i] += dp[i - j]) %= MOD;
            }
        }

        cout << "Number of ways : " << dp[n] % MOD << '\n';
    }

    return 0;
}