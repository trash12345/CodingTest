#include <bits/stdc++.h>

using namespace std;

int vis[20001];
vector<int> edges[20001];

int V, E;

void bfs(int x)
{
    queue<int> Q;

    // 1과 -1
    int flag = 1;

    vis[x] = flag;
    Q.push(x);

    while (!Q.empty())
    {
        int cur = Q.front();
        Q.pop();

        if (vis[cur] == 1)
        {
            flag = -1;
        }
        else if (vis[cur] == -1)
        {
            flag = 1;
        }

        int sz = edges[cur].size();

        for (int i = 0; i < sz; i++)
        {
            int nxt = edges[cur][i];

            if (vis[nxt] == 0)
            {
                vis[nxt] = flag;
                Q.push(nxt);
            }
        }
    }
}

string isBipartite()
{
    for (int i = 1; i <= V; i++)
    {
        int sz = edges[i].size();

        for (int j = 0; j < sz; j++)
        {
            int nxt = edges[i][j];

            if (vis[nxt] == vis[i])
            {
                return "NO";
            }
        }
    }

    return "YES";
}

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int K;
    cin >> K;

    while (K--)
    {
        cin >> V >> E;

        for (int i = 0; i < E; i++)
        {
            int u, v;
            cin >> u >> v;

            edges[u].push_back(v);
            edges[v].push_back(u);
        }

        for (int i = 1; i <= V; i++)
        {
            if (vis[i] == 0)
            {
                bfs(i);
            }
        }

        cout << isBipartite() << "\n";

        fill(vis, vis + 20001, 0);

        for (int i = 0; i <= V; i++)
        {
            edges[i].clear();
        }
    }

    return 0;
}