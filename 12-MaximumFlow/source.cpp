#include <bits/stdc++.h>
using namespace std;

bool bfs(vector<vector<int>> &residual, int s, int t, int &n, vector<int> &par)
{
    vector<bool> vis(n + 1, false);
    queue<int> q;
    q.push(s);
    vis[s] = true;
    par[s] = -1;

    while (!q.empty())
    {
        int u = q.front();
        q.pop();

        for (int v = 1; v <= n; v++)
        {
            if (vis[v] == false and residual[u][v] > 0)
            {
                if (v == t)
                {
                    par[v] = u;
                    return true;
                }
                q.push(v);
                par[v] = u;
                vis[v] = true;
            }
        }
    }

    return false;
}

int main()
{
    int n;
    cin >> n;
    int src, dst;
    cin >> src >> dst;
    int m;
    cin >> m;
    vector<vector<int>> graph(n + 1, vector<int>(n + 1, 0));
    for (int i = 0; i < m; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        graph[u][v] = w;
    }

    vector<vector<int>> residual = graph;
    vector<int> par(n + 1, 0);
    int maxi = 0;

    while (bfs(residual, src, dst, n, par))
    {
        int flow = INT_MAX;
        for (int v = dst; v != src; v = par[v])
        {
            int u = par[v];
            flow = min(flow, residual[u][v]);
        }

        for (int v = dst; v != src; v = par[v])
        {
            int u = par[v];
            residual[u][v] -= flow;
            residual[v][u] += flow;
        }

        maxi += flow;
    }

    cout << maxi;

    return 0;
}
