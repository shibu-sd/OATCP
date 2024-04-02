#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ll n;
    cin >> n;
    vector<ll>costs(n);
    for (auto &e : costs) cin >> e;
    ll coins;
    cin >> coins;

    sort(costs.begin(), costs.end());

    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (coins >= costs[i])
        {
            coins -= costs[i];
            ans++;
        }
        else
            break;
    }
    
    cout << ans;

    return 0;
}