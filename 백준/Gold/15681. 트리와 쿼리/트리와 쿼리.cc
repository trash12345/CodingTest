#include <bits/stdc++.h>

using namespace std;

vector<int> edges[100001];
bool vis[100001];
int dp[100001];

// 루트의 p는 -1
void sol(int x, int p)
{
    vis[x] = true;

    for (int i = 0; i < edges[x].size(); i++)
    {
        if (vis[edges[x][i]])
        {
            continue;
        }
        vis[edges[x][i]] = true;
        sol(edges[x][i], x);
    }

    if (p != -1)
    {
        dp[p] += dp[x];
    }
}

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    fill(dp, dp + 100001, 1);

    int N, R, Q;
    cin >> N >> R >> Q;

    for (int i = 0; i < N - 1; i++)
    {
        int u, v;
        cin >> u >> v;

        edges[u].push_back(v);
        edges[v].push_back(u);
    }

    sol(R, -1);

    for (int i = 0; i < Q; i++)
    {
        int u;
        cin >> u;
        cout << dp[u] << "\n";
    }

    return 0;
}