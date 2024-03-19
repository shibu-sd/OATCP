#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

ll rec(int i, int j, ll &n, ll &m, vector<ll> &a, vector<ll> &b, vector<vector<ll>> &dp)
{
    if (i == n or j == m)
        return 0;
    if (dp[i][j] != -1)
        return dp[i][j];
        
    ll ans = rec(i + 1, j, n, m, a, b, dp) % MOD;
    for (int k = i; k < n; ++k)
    {
        for (int l = j; l < m; ++l)
        {
            if (abs(a[k] - b[l]) == 1 or !abs(a[k] - b[l]))
            {
                ans = max(ans, rec(k + 1, l + 1, n , m, a, b, dp) + 1) % MOD;
            }
        }
    }

    return ans % MOD;
}

int main()
{
    ll n;
    cin >> n;
    if (n == 0)
    {
        cout << 0;
        return 0;
    }
    vector<ll> a(n);
    for (auto &e : a) cin >> e;

    ll m;
    cin >> m;
    if (m == 0)
    {
        cout << 0;
        return 0;
    }
    vector<ll> b(m);
    for (auto &e : b) cin >> e;

    vector<vector<ll>> dp(n + 1, vector<ll>(m + 1, -1));

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    ll ans = rec(0, 0, n, m, a, b, dp) % MOD;
    cout << ans % MOD;

    return 0;
}