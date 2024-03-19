#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

int main()
{
    ll n;
    cin >> n;
    vector<ll> arr(n);
    for (auto &e : arr) cin >> e;

    ll ans = LLONG_MIN;
    ll pref = 0, suff = 0;

    for (int i = 0; i < n; i++)
    {
        if (pref == 0)
            pref = 1;
        if (suff == 0)
            suff = 1;

        pref *= arr[i] % MOD;
        suff *= arr[n - i - 1] % MOD;
        ans = max({ans, pref, suff}) % MOD;
    }
    
    cout << ans;

    return 0;
}