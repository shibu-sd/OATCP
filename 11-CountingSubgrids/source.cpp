#include <bits/stdc++.h>
using namespace std;
#pragma GCC target("popcnt")

bitset<3010>b[3010];

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    
    long long ans = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            long long cnt = (b[i] & b[j]).count();
            ans += (cnt) * (cnt - 1);
        }
    }
    
    cout << (ans >> 1);

    return 0;
}