#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

int rec(int row, int col, int &n, vector<vector<char>>&grid, vector<vector<int>>&dp)
{
    if (row >= n or col >= n or grid[row][col] == '*')
        return 0;
    if (row == n - 1 and col == n - 1)
        return 1;
    if (dp[row][col] != -1)
        return dp[row][col];

    int down = rec(row + 1, col, n, grid, dp);
    int right = rec(row, col + 1, n, grid, dp);

    return dp[row][col] = (down + right) % MOD;
}

int main()
{
    int n;
    cin >> n;
    vector<vector<char>>grid(n, vector<char>(n));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cin >> grid[i][j];
    }
    
    vector<vector<int>>dp(n, vector<int>(n + 1, -1));
    int ans = rec(0, 0, n, grid, dp) % MOD;

    cout << "Number of paths : " << ans;

    return 0;
}