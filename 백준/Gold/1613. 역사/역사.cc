#include <bits/stdc++.h>

using namespace std;

int graph[401][401];

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    const int INF = 1e9;

    int N, K;
    cin >> N >> K;

    for (int i = 0; i <= N; i++)
    {
        for (int j = 0; j <= N; j++)
        {
            graph[i][j] = INF;
        }
        graph[i][i] = 0;
    }

    for (int i = 0; i < K; i++)
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

    int S;
    cin >> S;

    for (int i = 0; i < S; i++)
    {
        int a, b;
        cin >> a >> b;

        if (graph[a][b] == INF && graph[b][a] != INF && a != b)
        {
            cout << 1 << "\n";
        }
        else if (graph[a][b] != INF && graph[b][a] == INF && a != b)
        {
            cout << -1 << "\n";
        }
        else
        {
            cout << 0 << "\n";
        }
    }

    return 0;
}