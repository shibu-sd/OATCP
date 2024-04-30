#include <bits/stdc++.h>
using namespace std;

const int N = 3e5 + 20;

int n;
string st[N];
map<string, int> id;
map<int, string> rev;
vector<int> g[N];

void rec(int curr, int idx, string &cur, string sub)
{
    if (sub.size() > 4)
        return;

    if (!sub.empty())
    {
        if (id.find(sub) == id.end())
        {
            id[sub] = id.size() + 1;
            rev[id[sub]] = sub;
        }
        g[curr].push_back(id[sub] + n);
    }

    if (idx == cur.size())
        return;

    rec(curr, idx + 1, cur, sub);
    rec(curr, idx + 1, cur, sub + cur[idx]);
}

int reach[N], ans[N], vis[N];

bool possible(int node)
{
    if (vis[node])
        return false;
    vis[node] = true;
    for (auto ch : g[node])
    {
        if (reach[ch] == 0 || possible(reach[ch]))
        {
            reach[ch] = node;
            ans[node] = ch;
            return true;
        }
    }
    return false;
}

int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> st[i];
        string sub;
        rec(i, 0, st[i], sub);
    }

    int cnt = 0;
    for (int i = 1; i <= n; i++)
    {
        memset(vis, 0, sizeof vis);
        cnt += possible(i);
    }

    if (cnt != n)
        cout << -1;
    else
    {
        for (int i = 1; i <= n; i++)
            cout << rev[ans[i] - n] << '\n';
    }
}