#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ll m;
    cin >> m;
    vector<ll>arr(m);
    for (auto &e : arr) cin >> e;
    ll n;
    cin >> n;

    ll i = 0, ans = 0, cnt = 1;
    while (cnt <= n)
    {
        if (i < m and arr[i] <= cnt)
        {
            cnt += arr[i];
            i++;
        }
        else
        {
            cnt *= 2;
            ans++;
        }
    }
    
    cout << ans;

    return 0;
}