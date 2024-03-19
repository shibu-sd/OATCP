#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

int main()
{
    ll n;
    cin >> n;

    if (n == 0)
    {
        cout << 0;
        return 0;
    }

    vector<ll> arr(n);
    for (auto &e : arr) cin >> e;

    ll ans = LLONG_MIN;
    ll sum = 0, f = 0;

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        f += (i * arr[i]);
    }
    
    vector<ll>dp(n, 0);
    dp[0] = f;
    ll maxi = dp[0];
    
    for (int i = 1; i < n; i++)
    {
        dp[i] = (dp[i - 1] + sum) - (n * arr[n - i]);
        maxi = max(maxi, dp[i]);
    }
    
    cout << maxi;

    return 0;
}