#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool comp(const string &a, const string &b)
{
    return a + b > b + a;
}

int main()
{
    ll n;
    cin >> n;
    vector<ll> arr(n);
    for (auto &e : arr)
        cin >> e;

    vector<string> v;
    string ans = "";

    for (auto num : arr)
        v.push_back(to_string(num));

    sort(v.begin(), v.end(), comp);

    if (v[0][0] == '0')
        ans = "0";
    else
    {
        for (auto &s : v)
            ans += s;
    }

    cout << ans;

    return 0;
}