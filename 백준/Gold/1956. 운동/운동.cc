#include <bits/stdc++.h>

using namespace std;

int graph[401][401];

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    const int INF = 1e9;

    int V, E;
    int ans = INT_MAX;
    cin >> V >> E;

    for (int i = 0; i <= V; i++)
    {
        for (int j = 0; j <= V; j++)
        {
            graph[i][j] = INF;
        }
        graph[i][i] = 0;
    }

    for (int i = 0; i < E; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;

        graph[a][b] = c;
    }

    for (int k = 1; k <= V; k++)
    {
        for (int i = 1; i <= V; i++)
        {
            for (int j = 1; j <= V; j++)
            {
                graph[i][j] = min(graph[i][j], graph[i][k] + graph[k][j]);
            }
        }
    }

    for (int i = 1; i <= V; i++)
    {
        for (int j = 1; j <= V; j++)
        {
            if (graph[i][j] == INF || graph[j][i] == INF || graph[i][j] == 0)
            {
                continue;
            }

            ans = min(ans, graph[i][j] + graph[j][i]);
        }
    }

    if (ans == INT_MAX)
    {
        cout << -1;
    }
    else
    {
        cout << ans;
    }

    return 0;
}