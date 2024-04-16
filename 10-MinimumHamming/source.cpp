#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int>arr(n);
    for (auto &e : arr) cin >> e;

    int ans = 0;
    for (int bit = 0; bit < 32; bit++)
    {
        int cnt = 0;
        for (int i = 0; i < n; i++)
            cnt += (arr[i] >> bit) & 1;
        
        ans += (cnt) * (n - cnt);
    }
    
    cout << ans;

    return 0;
}