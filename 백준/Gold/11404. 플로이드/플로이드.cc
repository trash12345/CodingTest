#include <bits/stdc++.h>

using namespace std;

int graph[101][101];

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    const int INF = 1e9;

    int N, M;
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
        int a, b, c;
        cin >> a >> b >> c;

        graph[a][b] = min(graph[a][b], c);
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
        for (int j = 1; j <= N; j++)
        {
            if (graph[i][j] == INF)
            {
                cout << "0 ";
            }
            else
                cout << graph[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}