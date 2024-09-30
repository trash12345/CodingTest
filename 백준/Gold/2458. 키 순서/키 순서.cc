#include <bits/stdc++.h>

using namespace std;

int graph[501][501];

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    const int INF = 1e9;

    int N, M;
    int ans = 0;
    cin >> N >> M;

    for (int i = 0; i <= N; i++)
    {
        for (int j = 0; j <= N; j++)
        {
            graph[i][j] = INF;
        }
        graph[i][i] = 0;
    }

    for (int i = 0; i < M; i++)
    {
        int a, b;
        cin >> a >> b;

        graph[a][b] = 1;
    }

    for (int k = 1; k <= N; k++)
    {
        for (int i = 1; i <= N; i++)
        {
            for (int j = 1; j <= N; j++)
            {
                graph[i][j] = min(graph[i][j], graph[i][k] + graph[k][j]);
            }
        }
    }

    for (int i = 1; i <= N; i++)
    {
        int cnt = 0;

        for (int j = 1; j <= N; j++)
        {
            if ((graph[i][j] != INF || graph[j][i] != INF) && graph[i][j] != 0)
            {
                cnt++;
            }
        }

        if (cnt == N - 1)
        {
            ans++;
        }
    }

    cout << ans;

    return 0;
}