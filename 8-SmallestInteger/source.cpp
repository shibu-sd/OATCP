#include <bits/stdc++.h>
using namespace std;

int main()
{
    string num;
    cin >> num;
    int k;
    cin >> k;

    string ans = "";
    for (auto &c : num)
    {
        while (ans.size() > 0 and ans.back() > c and k > 0)
        {
            ans.pop_back();
            k--;
        }
        
        if (ans.size() > 0 or c != '0')
            ans.push_back(c);
    }

    while (ans.size() > 0 and k--)
        ans.pop_back();
    
    if (ans.empty())
        ans = '0';

    cout << ans << '\n';

    return 0;
}