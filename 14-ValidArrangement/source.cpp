#include <bits/stdc++.h>
using namespace std;

void getPath(unordered_map<int, vector<int>> &graph, vector<vector<int>> &path, int node)
{

    auto &adj = graph[node];
    while (adj.size())
    {
        int adjnode = adj.back();
        adj.pop_back();
        getPath(graph, path, adjnode);
        path.push_back({node, adjnode});
    }
}

int getStart(unordered_map<int, int> &deg)
{
    int start = -1;

    for (auto &[i, cnt] : deg)
    {
        if (cnt == 1)
            return i;
        start = i;
    }

    return start;
}

int main()
{
    int n;
    cin >> n;
    unordered_map<int, vector<int>> graph;
    unordered_map<int, int> deg;
    for (int i = 0; i < n; i++)
    {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        deg[u]++;
        deg[v]--;
    }

    int start = getStart(deg);

    vector<vector<int>> path;
    getPath(graph, path, start);
    reverse(path.begin(), path.end());

    for (auto &p : path)
        cout << p[0] << " " << p[1] << '\n';

    return 0;
}